#pragma once
#include "credentials.h"

class application : public credentials
{
private:
    int application_id;
    void setData(string, string, int, string); //Ändern der Variablen; ohne Authorisierung, daher private

public:
    application(); //Default-Konstruktor
    application(string, string, int, string); //Custom-Konstruktor

    void getData(string);  //Abrufen der Credentials und spezifischen Variable; Parameter: eingegebener Masterkey
    void editData(string, string, int, string, string); //Methode zum Editieren der Variablen
};


#pragma once
#include "credentials.h"

class website : public credentials
{
private:
    string url;
    void setData(string, string, string, string); //Ändern der Variablen; ohne Authorisierung, daher private

public:
    website(); //Default-Konstruktor
    website(string, string, string, string); //Custom-Konstruktor

    void getData(string);  //Abrufen der Credentials und spezifischen Variable; Parameter: eingegebener Masterkey
    void editData(string, string, string, string, string); //Methode zum Editieren der Variablen

};


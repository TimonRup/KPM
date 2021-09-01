#pragma once
#include <string>
#include <iostream>

using namespace std;

class credentials
{
private:
	virtual void setData(string, string, string); //Ändern der Variablen; ohne Authorisierung, daher private

protected:
	string username;
	string password;
	string masterkey;
	bool authorizeAccess(string); //Abgleichen des Masterkeys; Parameter: verwendeter Masterkey

public:
	credentials(); //Default-Konstruktor
	credentials(string, string, string); //Custom-Konstruktor

	virtual void getData(string); //Abrufen der Credentials; Parameter: eingegebener Masterkey
	virtual void editData(string, string, string, string); //Methode zum Editieren der Variablen
};



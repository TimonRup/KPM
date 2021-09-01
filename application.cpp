#include "application.h"
#include <iostream>

void application::setData(string us, string pw, int id, string mk_new)
{
	username = us;
	password = pw;
	application_id = id;
	masterkey = mk_new;
}

application::application() : credentials()
{
	application_id = 0;
}

application::application(string us, string pw, int id, string mk) : credentials(us, pw, mk)
{
	application_id = id;
}

void application::getData(string mk)
{
	if (this->authorizeAccess(mk) == true)
	{
		credentials::getData(mk);
		cout << "Application ID = " << application_id << "\n";
	}
	else
	{
		cout << "The masterkey you entered was wrong.\n\n";
	}
}

void application::editData(string us, string pw, int id, string mk, string mk_new)
{
	if (this->authorizeAccess(mk) == true)
	{
		setData(us, pw, id, mk_new);
	}
	else
	{
		cout << "The masterkey you entered was wrong.\n\n";
	}
}

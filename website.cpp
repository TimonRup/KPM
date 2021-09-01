#include "website.h"

void website::setData(string us, string pw, string ur, string mk_new)
{
	username = us;
	password = pw;
	url = ur;
	masterkey = mk_new;
}

website::website() : credentials()
{
	url = "";
}

website::website(string us, string pw, string ur, string mk) : credentials(us, pw, mk)
{
	url = ur;
}

void website::getData(string mk)
{
	if (this->authorizeAccess(mk) == true)
	{
		credentials::getData(mk); //doppelte Authorisation
		cout << "URL = " << url << "\n";
	}
	else
	{
		cout << "The masterkey you entered was wrong.\n\n";
	}
}

void website::editData(string us, string pw, string ur, string mk, string mk_new)
{
	if (this->authorizeAccess(mk) == true)
	{
		setData(us, pw, ur, mk_new);
	}
	else
	{
		cout << "The masterkey you entered was wrong.\n\n";
	}
}

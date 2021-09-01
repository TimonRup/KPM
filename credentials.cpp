#include "credentials.h"


using namespace std;

credentials::credentials() : username(""), password(""), masterkey("")
{
}

credentials::credentials(string un, string pw, string mk) : username(un), password(pw), masterkey(mk)
{
}

bool credentials::authorizeAccess(string mk)
{
	if (masterkey == mk)
	{
		return true;
	}
	return false;
}

void credentials::setData(string us, string pw, string mk_new)
{
	username = us;
	password = pw;
	masterkey = mk_new;
}

void credentials::getData(string mk)
{
	if (this->authorizeAccess(mk) == true)
	{
		cout <<"Username = " << username << "\nPassword = " << password << "\n";
	}
	else
	{
		cout << "The masterkey you entered was wrong.\n\n";
	}
}

void credentials::editData(string us, string pw, string mk, string mk_new)
{
	if (this->authorizeAccess(mk) == true)
	{
		setData(us, pw, mk_new);
	}
	else
	{
		cout << "The masterkey you entered was wrong.\n";
	}
}

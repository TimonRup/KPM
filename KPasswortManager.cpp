#include <iostream>
#include "application.h"
#include "website.h"

int main()
{
	//Creating a new credentials object
	credentials TestCredentials = credentials("testuser", "testpassword", "testmasterkey");

	//Authorization test
	TestCredentials.getData("wrongmasterkey");
	TestCredentials.getData("testmasterkey");
	cout << "\n";

	//Credentials editData function
	TestCredentials.editData("changeduser", "changedpassword", "testmasterkey", "testmasterkey");
	TestCredentials.getData("testmasterkey");
	cout << "\n";


	//Creating a new application object
	application TestApplication = application("testuser", "testpassword", 5, "old_masterkey");

	//Application editData function with a masterkey change
	TestApplication.getData("old_masterkey");
	TestApplication.editData("changedAppUser", "changedAppPassword", 6, "old_masterkey", "changed_masterkey");
	TestApplication.getData("old_masterkey");
	TestApplication.getData("changed_masterkey");
	cout << "\n";

	//Creating a new URL object
	website TestWebsite = website("webuser", "webpassword", "domain.tld/login", "webmasterkey");

	//Website object test
	TestWebsite.getData("webmasterkey");
	cout << "\n";

	//Default-Kontruktor
	website defaultConstructor = website();
	defaultConstructor.getData("");
	defaultConstructor.editData("non-default", "non-default", "", "", "non-default-mk");
	defaultConstructor.getData("non-default-mk");
	cout << "\n";

	return 0;
}
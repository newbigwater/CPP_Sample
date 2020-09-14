#include <stdio.h>
#include "MyApp.h"

int main(void)
{
	cout << "MyApp" << endl;
	MyApp *app = new MyApp();
	app->InitInstance();
	app->Run();
	delete app;

	cout << "" << endl;

	cout << "EHApp" << endl;
	EHApp *app2 = new MyApp();
	app2->InitInstance();
	app2->Run();
	delete app2;

	system("pause");
	return 0;
}

#include "MyApp.h"
#include "MyView.h"


MyApp::MyApp()
{
	cout << "MyApp 积己" << endl;
}


MyApp::~MyApp()
{
	cout << "MyApp 积己" << endl;
}

void MyApp::InitInstance()
{
	cout << "MyApp 檬扁拳" << endl;
	EHApp::InitInstance();
}

EHView * MyApp::MakeView()
{
	return new MyView();
}

#include "MyApp.h"
#include "MyView.h"


MyApp::MyApp()
{
	cout << "MyApp 생성" << endl;
}


MyApp::~MyApp()
{
	cout << "MyApp 생성" << endl;
}

void MyApp::InitInstance()
{
	cout << "MyApp 초기화" << endl;
	EHApp::InitInstance();
}

EHView * MyApp::MakeView()
{
	return new MyView();
}

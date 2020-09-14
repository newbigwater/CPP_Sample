#include "MyApp.h"
#include "MyView.h"


MyApp::MyApp()
{
	cout << "MyApp 생성" << endl;
}


MyApp::~MyApp()
{
	cout << "MyApp 해제" << endl;
}

void MyApp::InitInstance()
{
	cout << "MyApp::View 초기화" << endl;
	EHApp::InitInstance();
}

EHView * MyApp::MakeView()
{
	return new MyView();
}

#include "MyApp.h"
#include "MyView.h"


MyApp::MyApp()
{
	cout << "MyApp ����" << endl;
}


MyApp::~MyApp()
{
	cout << "MyApp ����" << endl;
}

void MyApp::InitInstance()
{
	cout << "MyApp::View �ʱ�ȭ" << endl;
	EHApp::InitInstance();
}

EHView * MyApp::MakeView()
{
	return new MyView();
}

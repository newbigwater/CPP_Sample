#include "EHApp.h"

EHApp::EHApp()
{
	cout << "EHApp 생성" << endl;
}

EHApp::~EHApp()
{
	cout << "EHApp 해제" << endl;
	ExitInstance();
}

void EHApp::InitInstance()
{
	cout << "EHApp::View 초기화" << endl;
	m_pView = MakeView();
}

void EHApp::Run()
{
	cout << "EHApp::View 활성화" << endl;
	m_pView->Show();
}

void EHApp::ExitInstance()
{
	cout << "EHApp::View 해제화" << endl;
	delete m_pView;
}

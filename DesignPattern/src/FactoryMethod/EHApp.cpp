#include "EHApp.h"

EHApp::EHApp()
{
	cout << "EHApp 생성" << endl;
}

EHApp::~EHApp()
{
	cout << "EHApp 제거" << endl;
}

void EHApp::InitInstance()
{
	cout << "EHApp 초기화" << endl;
	m_pView = MakeView();
}

void EHApp::Run()
{
	cout << "EHApp 활성화" << endl;
	m_pView->Show();
}

void EHApp::ExitInstance()
{
	cout << "EHApp 해제화" << endl;
	delete m_pView;
}

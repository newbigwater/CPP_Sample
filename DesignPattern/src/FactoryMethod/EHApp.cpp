#include "EHApp.h"

EHApp::EHApp()
{
	cout << "EHApp ����" << endl;
}

EHApp::~EHApp()
{
	cout << "EHApp ����" << endl;
}

void EHApp::InitInstance()
{
	cout << "EHApp �ʱ�ȭ" << endl;
	m_pView = MakeView();
}

void EHApp::Run()
{
	cout << "EHApp Ȱ��ȭ" << endl;
	m_pView->Show();
}

void EHApp::ExitInstance()
{
	cout << "EHApp ����ȭ" << endl;
	delete m_pView;
}

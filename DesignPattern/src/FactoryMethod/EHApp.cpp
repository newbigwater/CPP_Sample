#include "EHApp.h"

EHApp::EHApp()
{
	cout << "EHApp ����" << endl;
}

EHApp::~EHApp()
{
	cout << "EHApp ����" << endl;
	ExitInstance();
}

void EHApp::InitInstance()
{
	cout << "EHApp::View �ʱ�ȭ" << endl;
	m_pView = MakeView();
}

void EHApp::Run()
{
	cout << "EHApp::View Ȱ��ȭ" << endl;
	m_pView->Show();
}

void EHApp::ExitInstance()
{
	cout << "EHApp::View ����ȭ" << endl;
	delete m_pView;
}

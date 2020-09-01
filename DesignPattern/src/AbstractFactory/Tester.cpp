#include "Tester.h"
#include "EvDayFactory.h"
#include "HoDayFactory.h"

Tester::Tester()
{
	Initialize();
}


Tester::~Tester()
{
	delete m_pFactories[0];
	delete m_pFactories[1];
}

void Tester::Initialize()
{
	m_pFactories[0] = new EvDayFactory();
	m_pFactories[1] = new HoDayFactory();
}

void Tester::Test()
{
	TestDirect();

	TestUsingFactory();
}

void Tester::TestCase(Camera *pCamera, Lens* pLens)
{
	cout << "�׽�Ʈ" << endl;
	if(pCamera->PutInLens(pLens) == false)
	{
		cout << "ī�޶� ȣȯ�� ���� �ʾ� �������� �ʽ��ϴ�." << endl;
	}
	else if(pCamera->TaskAPicture() == false)
	{
		cout << "������ ������ �ʾҽ��ϴ�." << endl;
	}
}

void Tester::TestDirect()
{
	cout << "-------------- EvCamera + HoLens --------------" << endl;
	Camera* pCamera = new EvCamera();
	Lens* pLens = new HoLens();
	
	TestCase(pCamera, pLens);
	
	delete pCamera;
	delete pLens;
}

void Tester::TestUsingFactory()
{
	cout << "-------------- EvCamera + EvLens --------------" << endl;
	Camera *pCamera = m_pFactories[0]->CreateCamera();
	Lens *pLens = m_pFactories[0]->CreateLens();
	TestCase(pCamera, pLens);

	cout << "-------------- HoCamera + HoLens --------------" << endl;
	pCamera = m_pFactories[1]->CreateCamera();
	pLens = m_pFactories[1]->CreateLens();
	TestCase(pCamera, pLens);
}

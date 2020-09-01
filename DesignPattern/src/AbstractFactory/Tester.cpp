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
	cout << "테스트" << endl;
	if(pCamera->PutInLens(pLens) == false)
	{
		cout << "카메라 호환이 되지 않아 장착되지 않습니다." << endl;
	}
	else if(pCamera->TaskAPicture() == false)
	{
		cout << "사진이 찍히지 않았습니다." << endl;
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

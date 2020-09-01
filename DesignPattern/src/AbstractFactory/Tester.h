#pragma once
#include "DayFactory.h"

class Tester
{
public:
	Tester();
	virtual ~Tester();

private:
	DayFactory *m_pFactories[2];

public:
	void Test();

private:
	void Initialize();
	void TestCase(Camera *pCamera, Lens* pLens); // ȣȯ�� �׽�Ʈ
	void TestDirect(); //���� ī�޶�� ��� �����Ͽ� ȣȯ�� �׽�Ʈ
	void TestUsingFactory(); //���丮�� ���� ī�޶�� ���� �����Ͽ� ȣȯ�� �׽�Ʈ

};


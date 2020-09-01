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
	void TestCase(Camera *pCamera, Lens* pLens); // 호환성 테스트
	void TestDirect(); //직접 카메라와 렌즈를 생성하여 호환성 테스트
	void TestUsingFactory(); //팩토리를 통해 카메라와 렌즈 생성하여 호환성 테스트

};


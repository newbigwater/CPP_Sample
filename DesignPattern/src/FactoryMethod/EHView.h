#pragma once
#include "Common.h"

class EHView
{
public:
	EHView()
	{
		cout << "EHView 생성" << endl;
	};
	virtual ~EHView() 
	{
		cout << "EHView 제거" << endl;
	};

public:
	virtual void Show() = 0;
};

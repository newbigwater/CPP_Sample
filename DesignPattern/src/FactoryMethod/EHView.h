#pragma once
#include "Common.h"

class EHView
{
public:
	EHView()
	{
		cout << "EHView ����" << endl;
	};
	virtual ~EHView() 
	{
		cout << "EHView ����" << endl;
	};

public:
	virtual void Show() = 0;
};

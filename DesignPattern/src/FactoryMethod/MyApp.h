#pragma once
#include "EHApp.h"

class MyApp : public EHApp
{
public:
	MyApp();
	virtual ~MyApp();

public:
	void InitInstance();

public:
	virtual EHView *MakeView();
};


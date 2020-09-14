#pragma once
#include "EHView.h"

class EHApp
{
public:
	EHApp();
	virtual ~EHApp();

private:
	EHView *m_pView;

public:
	virtual void InitInstance();
	virtual void Run();
	virtual void ExitInstance();

protected:
	virtual EHView *MakeView() = 0;
};

#pragma once
#include "Common.h"
#include "Lens.h"

class EvLens : public Lens
{
public:
	EvLens() {}
	virtual ~EvLens() {}

public:
	virtual void Task()
	{
		cout << "�ε巴��." << endl;
	}

	void AutoFocus()
	{
		cout << "AutoFocus..." << endl;
	}
};

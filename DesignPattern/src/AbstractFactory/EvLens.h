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
		cout << "부드럽다." << endl;
	}

	void AutoFocus()
	{
		cout << "AutoFocus..." << endl;
	}
};

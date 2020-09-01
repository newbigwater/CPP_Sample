#pragma once
#include "Common.h"
#include "Lens.h"

class HoLens : public Lens
{
public:
	HoLens() {}
	virtual ~HoLens() {}

public:
	virtual void Task()
	{
		cout << "자연스럽다." << endl;
	}
	void ManualFocus()
	{
		cout << "ManualFocus..." << endl;
	}
};

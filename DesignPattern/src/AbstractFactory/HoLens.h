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
		cout << "�ڿ�������." << endl;
	}
	void ManualFocus()
	{
		cout << "ManualFocus..." << endl;
	}
};

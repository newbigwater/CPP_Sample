#pragma once
#include "DayFactory.h"
#include "EvCamera.h"

class EvDayFactory : public DayFactory
{
public:
	EvDayFactory() {}
	virtual ~EvDayFactory() {}

public:
	virtual Camera *CreateCamera()
	{
		return new EvCamera();
	}

	virtual Lens* CreateLens()
	{
		return new EvLens();
	}
};
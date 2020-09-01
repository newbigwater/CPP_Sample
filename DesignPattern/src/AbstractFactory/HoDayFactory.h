#pragma once
#include "DayFactory.h"
#include "HoCamera.h"

class HoDayFactory : public DayFactory
{
public:
	HoDayFactory() {}
	virtual ~HoDayFactory() {}

public:
	virtual Camera *CreateCamera()
	{
		return new HoCamera();
	};
	virtual Lens *CreateLens()
	{
		return new HoLens();
	};
};



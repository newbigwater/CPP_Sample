#pragma once
#include "Lens.h"

class Lens
{
public:
	Lens() {};
	~Lens() {};

public:
	virtual void Task() = 0;
};


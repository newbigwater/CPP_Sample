#pragma once
#include "Camera.h"
#include "EvLens.h"

class EvCamera : public Camera
{
public:
	EvCamera() {}
	virtual ~EvCamera() {}

public:
	virtual bool TaskAPicture()
	{
		EvLens *pEvLens = dynamic_cast<EvLens*>(GetLens());
		if (NULL == pEvLens)
			return false;
		else
		{
			pEvLens->AutoFocus();
			return __super::TaskAPicture();
		}
	}

	virtual bool PutInLens(Lens* pLens)
	{
		EvLens* pEvLens = dynamic_cast<EvLens*>(pLens);
		if (NULL == pEvLens)
			return false;
		else
			return __super::PutInLens(pEvLens);
	}
};

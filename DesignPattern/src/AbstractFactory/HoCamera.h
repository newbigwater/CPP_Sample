#pragma once
#include "Camera.h"
#include "HoLens.h"

class HoCamera : public Camera
{
public:
	HoCamera() {}
	virtual ~HoCamera() {}

public:
	virtual bool TaskAPicture()
	{
		HoLens *pHoLens  = dynamic_cast<HoLens *>(GetLens());
		if (NULL == pHoLens)
			return false;
		else
		{
			pHoLens->ManualFocus();
			return __super::TaskAPicture();
		}
	}

	virtual bool PutInLens(Lens* pLens)
	{
		HoLens *pHoLens = dynamic_cast<HoLens*>(pLens);
		if (NULL == pHoLens)
			return false;
		else
			return __super::PutInLens(pHoLens);
	}
};
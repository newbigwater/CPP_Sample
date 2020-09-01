#pragma once
#include "Common.h"
#include "Lens.h"

class Camera
{
public:
	Camera(): m_pLens(NULL) {}
	virtual ~Camera() {}

private:
	Lens* m_pLens;

public:
	Lens* GetLens() const { return m_pLens; }

public:
	virtual bool TaskAPicture()
	{
		if (NULL == GetLens())
			return false;
		else
			GetLens()->Task();
		return true;
	}

	virtual bool PutInLens(Lens* pLens)
	{
		if (NULL != GetLens())
			return false;
		else
			m_pLens = pLens;
		return true;
	}

	Lens *GetOutLens()
	{
		Lens* pLens = GetLens();
		m_pLens = NULL;
		return pLens;
	}
};

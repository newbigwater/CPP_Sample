#pragma once
#include "Common.h"
#include "Camera.h"

typedef vector<Camera*> Cameras;
typedef vector<Camera*>::iterator CIter;

typedef vector<Lens*> Lenses;
typedef vector<Lens*>::iterator LIter;

class DayFactory
{
public:
	DayFactory() {}
	virtual ~DayFactory()
	{
		DisposeCameras();
		DisposeLenses();
	}

private:
	Cameras m_Cameras;
	Lenses m_Lenses;

public:
	Cameras GetCameras() const { return m_Cameras; }
	Lenses GetLenses() const { return m_Lenses; }

public:
	virtual Camera *CreateCamera() = 0;
	virtual Lens *CreateLens() = 0;

protected:
	void PutCamera(Camera *pCamera)
	{
		if (NULL != pCamera)
			m_Cameras.push_back(pCamera);
	}

	void PutLnes(Lens *pLens)
	{
		if (NULL != pLens)
			m_Lenses.push_back(pLens);
	}

private:
	void DisposeCameras()
	{
		for (auto get_camera : GetCameras())
		{
			delete get_camera;
		}
		m_Cameras.clear();
	}

	void DisposeLenses()
	{
		for (auto get_lense : GetLenses())
		{
			delete get_lense;
		}
		m_Lenses.clear();
	}
};
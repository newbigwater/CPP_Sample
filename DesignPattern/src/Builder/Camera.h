#pragma once
#include "PictureBuilder.h"

class Camera
{
public:
	Camera();
	virtual ~Camera();

private:
	PictureBuilder *m_pPictureBuilder[2];
	Picture m_Picture;

public:
	Picture PressAShutter(string origin, bool night = false);
	Picture GetPicture();
};


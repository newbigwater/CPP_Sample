#include "Camera.h"
#include "REPreventBuilder.h"
#include "SmoothBuilder.h"

Camera::Camera()
{
	m_pPictureBuilder[0] = new REPreventBuilder();
	m_pPictureBuilder[1] = new SmoothBuilder();

	m_Picture = "";
}


Camera::~Camera()
{
	delete m_pPictureBuilder[0];
	delete m_pPictureBuilder[1];
}

Picture Camera::PressAShutter(string origin, bool night /*= false*/)
{
	PictureBuilder *pPb = NULL;
	if (night)
		pPb = m_pPictureBuilder[0];
	else
		pPb = m_pPictureBuilder[1];

	pPb->SetPicture(origin);
	pPb->CollectImage();
	pPb->Change();

	m_Picture = pPb->GetPicture();
	return m_Picture;
}

Picture Camera::GetPicture()
{
	return "»çÁø : " + m_Picture;
}


#pragma once
#include "Common.h"

typedef string Picture;

class PictureBuilder
{
public:
	PictureBuilder() {}
	virtual ~PictureBuilder() {}

private:
	Picture m_Picture;

public:
	Picture GetPicture() const { return m_Picture; }
	void SetPicture(Picture val) { m_Picture = val; }

public:
	virtual void CollectImage() = 0;
	virtual void Change() = 0;
};

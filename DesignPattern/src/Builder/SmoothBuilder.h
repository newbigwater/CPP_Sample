#pragma once
#include "PictureBuilder.h"

#define SHARP "Sharp"
#define SMOOTH "Smooth"

class SmoothBuilder : public PictureBuilder
{
public:
	SmoothBuilder();
	virtual ~SmoothBuilder();

private:
	int m_Index;

public:
	int GetIndex() const { return m_Index; }
	void SetIndex(int val) { m_Index = val; }

public:
	virtual void CollectImage();
	virtual void Change();
};


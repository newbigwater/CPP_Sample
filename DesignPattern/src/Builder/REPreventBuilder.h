#pragma once
#include "PictureBuilder.h"

#define RED_EYE "RedEye"
#define NORMAL_EYE "NormalEye"

class REPreventBuilder : public PictureBuilder
{
public:
	REPreventBuilder();
	virtual ~REPreventBuilder();

private:
	int m_Index;

public:
	int GetIndex() const { return m_Index; }
	void SetIndex(int val) { m_Index = val; }

public:
	virtual void CollectImage();
	virtual void Change();
};


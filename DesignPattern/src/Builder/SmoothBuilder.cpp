#include "SmoothBuilder.h"



SmoothBuilder::SmoothBuilder()
{
}


SmoothBuilder::~SmoothBuilder()
{
}

void SmoothBuilder::CollectImage()
{
	string origin = GetPicture();
	SetIndex(origin.find_first_of(SHARP));
}

void SmoothBuilder::Change()
{
	string origin = GetPicture();
	const char *cstr = origin.c_str();

	int len = origin.size();
	int flen = strlen(SHARP);

	// �� �κ� ���ڿ� ����
	string front = origin.substr(0, GetIndex());
	// �� �κ� ���ڿ� ����
	string last = origin.substr(GetIndex() + flen, len - GetIndex() - flen);

	// �̹��� ����
	SetPicture(front + SMOOTH + last);
	SetIndex(0);
}

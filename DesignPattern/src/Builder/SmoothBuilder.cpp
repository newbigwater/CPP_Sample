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

	// 앞 부분 문자열 복사
	string front = origin.substr(0, GetIndex());
	// 뒷 부분 문자열 복사
	string last = origin.substr(GetIndex() + flen, len - GetIndex() - flen);

	// 이미지 수정
	SetPicture(front + SMOOTH + last);
	SetIndex(0);
}

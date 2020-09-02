#include "REPreventBuilder.h"



REPreventBuilder::REPreventBuilder()
{
}


REPreventBuilder::~REPreventBuilder()
{
}

void REPreventBuilder::CollectImage()
{
	string origin = GetPicture();
	SetIndex(origin.find_first_of(RED_EYE));
}

void REPreventBuilder::Change()
{
	string origin = GetPicture();
	const char *cstr = origin.c_str();

	int len = origin.size();
	int flen = strlen(RED_EYE);

	string front = origin.substr(0, GetIndex());
	string last = origin.substr(GetIndex() + flen, len - GetIndex() - flen);

	SetPicture(front + NORMAL_EYE + last);
	SetIndex(0);
}

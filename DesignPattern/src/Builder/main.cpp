#include <stdio.h>
#include "Common.h"
#include "Camera.h"

int main(void)
{
	Camera *camera = new Camera();

	string strImg = "RedEyeSharpBody";

	camera->PressAShutter(strImg, true);
	cout << "Night IMG : ";
	cout << strImg.c_str();
	cout << " -> ";
	cout << camera->GetPicture().c_str() << endl;

	camera->PressAShutter(strImg, false);
	cout << "No Night IMG : ";
	cout << strImg.c_str();
	cout << " -> ";
	cout << camera->GetPicture().c_str() << endl;

	system("pause");
	return 0;
}

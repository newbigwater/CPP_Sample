#include "MyView.h"



MyView::MyView()
{
	cout << "MyView 생성" << endl;
};


MyView::~MyView()
{
	cout << "MyView 제거" << endl;
};

void MyView::Show()
{
	cout << "MyView::Show()" << endl;
}

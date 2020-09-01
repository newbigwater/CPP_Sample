#include "stdio.h"
#include <cstdlib>
#include "Tester.h"

int main()
{
	Tester *pTester = new Tester();
	pTester->Test();
	delete pTester;

	system("pause");
	return 0;
}

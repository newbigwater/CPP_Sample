// plc.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	LONG lRetVal;
	int nRet = mdopen(151, -1, &lRetVal);

	int addr = 1;
	int * pSize = (int*)malloc(sizeof(int));
	*pSize = 2;
	long nVal[1] = { 0, };

	long data[1] = { 0, };
	while (1)
	{
		nRet = mdSendEx(lRetVal, 1, 2, DevD, (SHORT)addr, (LPLONG)pSize, data);
		nRet = mdreceiveex(lRetVal, 1, 2, DevD, (SHORT)addr, (LPLONG)pSize, nVal);
		data[0]++;
	}

    return 0;
}


#include "stdafx.h"  
#include "IO.h"  

void IO::OArray(int n, int* V)
{
	for (int i = 0; i <= n; i++)
		printf("%d ", V[i]);
	printf("\n");
}

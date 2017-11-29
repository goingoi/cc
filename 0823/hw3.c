#include <stdio.h>
#include <stdlib.h>
hw3()
{
	int a, b;
	b = 0;
	for (a = 0; a<99; a++)
	{
		a = a + 1;
		b = b + a;
	}
	printf("%d\n", b);
}
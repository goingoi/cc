#include <stdio.h>
#include <stdlib.h>
hw63()
{
	int a, b, c, d, e;
	printf("�п�J�P�P�����:");
	scanf("%d", &a);
	for (a; a >= 1; a--)
	{
		b = a;
		for (b; b >= 1; b--)
		{
			printf("*");
		}
		printf("\n");
	}
}
#include <stdio.h>
#include <stdlib.h>
hw63()
{
	int a, b, c, d, e;
	printf("請輸入星星的行數:");
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
#include <stdio.h>
#include <stdlib.h>
hw62()
{
	int a, b, c, d, e;
	printf("請輸入星星的行數:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= b; c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
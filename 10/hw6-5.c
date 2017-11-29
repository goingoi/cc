#include <stdio.h>
#include <stdlib.h>
hw65()
{
	int a, b, c, d, e, f;
	printf("請輸入星星的行數:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (c = a; c >= b + 1; c--)
		{
			printf(" ");
		}
		for (d = 1; d <= b; d++)
		{
			printf("*");
		}
		for (e = 1; e <= b - 1; e++)
		{
			printf("*");
		}
		printf("\n");
	}
}
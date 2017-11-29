#include <stdio.h>
#include <stdlib.h>
hw3()
{
	int a;
	printf("輸入氣溫: ");
	scanf("%d", &a);
	if (a <= 22 && a >= 20)
	{
		printf("加件薄外套 \n");
	}
	if (a <= 19 && a >= 14)
	{
		printf("天氣冷,請穿外套 \n");
	}
	if (a >= 21)
	{
		printf("你可以去死了 \n");
	}
	if (a <= 13)
	{
		printf("你可以去死了 \n");
	}
}
#include <stdio.h>
#include <stdlib.h>
hw2()
{
	int a, b;
	printf("請輸入攝氏溫度:");
	scanf("%d", &a);
	b = a*1.8 + 32;
	printf("轉換華氏溫度為:%d\n", b);
}
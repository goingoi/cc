#include <stdio.h>
#include <stdlib.h>
hw4()
{
	int a, b, c, d, e;
	printf("需要買幾瓶烏龍拿鐵? \n");
	scanf("%d", &a);
	printf("需要買幾瓶珍珠奶茶? \n");
	scanf("%d", &b);
	c = a * 55;
	d = b * 45;
	e = c + d;
	if (c + d >= 800 && a + b >= 16)
	{
		e = e*0.9;
	}
	printf("這樣總共是:%d", e);

}
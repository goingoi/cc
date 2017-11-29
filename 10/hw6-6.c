#include <stdio.h>
#include <stdlib.h>
hw66()
{
	int i,j,k, a[]= {1,2,3,4,5,6,7,8,9,10},b=0;
	for (i=0; i <=8; i++)
	{
		for (j = 0; j <=8; j++)
		{
			if (a[j] <= a[j+1])
			{
				b=a[j], a[j] = a[j + 1], a[j + 1] = b;
			}
		}
	}
	for (k = 0; k < 10; k++)
	{
		printf("%d\n", a[k]);
	}
}
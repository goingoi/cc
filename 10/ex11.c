#include <stdio.h>
#include <stdlib.h>
ex11()
{
	int i = 1, j = 1; /* 設定迴圈控制變數的初值 */
	while (i <= 9) /* 外層迴圈 */
	{
		while (j <= 9) /* 內層迴圈 */
		{
			printf("%d*%d=%2d ", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
		j = 1;
	}
}
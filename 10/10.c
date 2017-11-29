#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();
void ex11();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw61();
void hw62();
void hw63();
void hw64();
void hw65();
void hw66();
int main()
{
	int a, b;
	b = 0;
	printf("1.範例一:\n");
	printf("2.範例二:\n");
	printf("3.範例三:\n");
	printf("4.範例四:\n");
	printf("5.範例五:\n");
	printf("6.範例六:\n");
	printf("7.範例七:\n");
	printf("8.範例八:\n");
	printf("9.範例九:\n");
	printf("10.範例十:\n");
	printf("11.範例十一:\n");
	printf("12.作業一:\n");
	printf("13.作業二:\n");
	printf("14.作業三:\n");
	printf("15.作業四:\n");
	printf("16.作業五:\n");
	printf("17.作業六之一:\n");
	printf("18.作業六之二:\n");
	printf("19.作業六之三:\n");
	printf("20.作業六之四:\n");
	printf("21.作業六之五:\n");
	printf("22.作業六之六:\n");
	do
	{
		printf("輸入題號:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;
		case 10:
			ex10();
			break;
		case 11:
			ex11();
			break;
		case 12:
			hw1();
			break;
		case 13:
			hw2();
			break;
		case 14:
			hw3();
			break;
		case 15:
			hw4();
			break;
		case 16:
			hw5();
			break;
		case 17:
			hw61();
			break;
		case 18:
			hw62();
			break;
		case 19:
			hw63();
			break;
		case 20:
			hw64();
			break;
		case 21:
			hw65();
			break;
		case 22:
			hw66();
			break;
		default:
			printf("輸入錯誤\n");
			break;
		}
	} while (b == 0);
	system("pause");
	return 0;
}
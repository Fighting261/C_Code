#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int j)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(j); i++)
//	{
//		if (j%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//
//	return 0;
//}

//#include <stdio.h>
//int leap_year(int i)
//{
//	return ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}		
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//void Swap(int *pa, int *pb)
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换之前：a=%d b=%d\n", a, b);
//	int t = 0;
//	Swap(&a, &b);
//	printf("交换之后：a=%d b=%d\n", a, b);
//	return 0;
//}
#include <stdio.h>

void printf_table(int num)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int num = 0;
	printf("请输入一个整数");
	scanf("%d", &num);
	printf_table(num);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		m = i / 10;
//		n = i % 10;
//		if (m > 8 && m < 10)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	    if (n > 8 && n < 10)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	double sum1 = 0;
	double sum2 = 0;
	double sum  = 0;
	for (i = 1; i <= 100; i+=2)
	{
		sum1 += 1.0 / i;
	}
	for (j = 2; j <= 100; j+=2)
	{
		sum2 += 1.0 / j;
	}
	sum = sum1 - sum2;
	printf("%f\n", sum);

	return 0;
}
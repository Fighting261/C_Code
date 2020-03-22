#define _CRT_SECURE_NO_WARNINGS 1

//求10 个整数中最大值
#include <stdio.h>
int main()
{
	int i = 0;
	int max = 0;
	int a[10] = { 0, 2, 4, 6, 8, 1, 3, 5, 7, 9 };
	for (i = 0; i < 10; i++)
	{
		if (a[i] > a[i + 1])
			max = a[i];
		else
			max = a[i + 1];
	}
	printf("%d\n", max);

	return 0;
}
//在屏幕上输出9 * 9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			if (i >= j)
//			printf("%d*%d=%d\t",j,i,i*j );
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
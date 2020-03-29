#define _CRT_SECURE_NO_WARNINGS 1
////两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//#include <stdio.h>
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int num = 0;
//	int count = 0;
//	num = m^n;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////打印整数二进制的奇数位和偶数位
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 10;
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}
////打印整数二进制的奇数位和偶数位
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 10;
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}
////写一个函数返回参数二进制中 1 的个数。
//#include <stdio.h>
//int num_1(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1);
//		{
//			count++;
//		}
//		 num=num>>1;
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", num_1(15));
//	return 0;
//}
//不允许创建临时变量，交换两个整数的内容
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	printf("交换之前：a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换之后：a=%d b=%d\n", a, b);

	return 0;
}


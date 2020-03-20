#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, d;
	     printf("请输入两个整数\n");
	     scanf("%d%d", &a, &b);
	         d = a * b;
	         c = a % b;
	if (a < 1 || b < 1)
		 printf("输入错误，请重新输入\n");
	else
	{
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
		if (c == 0)
		 printf("最大公约数是：%d\n", b);
		 printf("最小公倍数是：%d\n", d / b);
	}

	return 0;
}

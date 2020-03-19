#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()//三个整数排序
{
	int a, b, c, t;
	printf("请输入三个整数\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		t = a; a = b; b = t;
	}
	if (a < c)
	{
		t = a; a = c; c = t;
	}
	if (b < c)
	{
		t = b; b = c; c = t;
	}
	printf("从大到小排列是：%d%d%d\n", a, b, c);
	printf("从小到大排列是：%d%d%d\n", c, b, a);
	return 0;
}
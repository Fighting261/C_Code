#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, b, c,max;
	printf("请输入三个整数\n");
	scanf("%d%d%d", &a, &b, &c);

	    max = a;
	if (a < b)
		max = b;
    if (b < c)
		max = c;
	printf("最大的数字是%d\n", max);

    return 0；
}

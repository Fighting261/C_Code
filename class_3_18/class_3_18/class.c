#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, b, c,max;
	printf("��������������\n");
	scanf("%d%d%d", &a, &b, &c);

	    max = a;
	if (a < b)
		max = b;
    if (b < c)
		max = c;
	printf("����������%d\n", max);

    return 0��
}

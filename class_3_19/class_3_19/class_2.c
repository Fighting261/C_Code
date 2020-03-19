#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()//打印100以内的素数
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}

	return 0;
}

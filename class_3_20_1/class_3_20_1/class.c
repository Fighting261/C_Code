#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, d;
	     printf("��������������\n");
	     scanf("%d%d", &a, &b);
	         d = a * b;
	         c = a % b;
	if (a < 1 || b < 1)
		 printf("�����������������\n");
	else
	{
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
		if (c == 0)
		 printf("���Լ���ǣ�%d\n", b);
		 printf("��С�������ǣ�%d\n", d / b);
	}

	return 0;
}

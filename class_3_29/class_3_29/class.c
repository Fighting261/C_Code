#define _CRT_SECURE_NO_WARNINGS 1
////����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
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

////��ӡ���������Ƶ�����λ��ż��λ
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
////��ӡ���������Ƶ�����λ��ż��λ
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
////дһ���������ز����������� 1 �ĸ�����
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
//����������ʱ������������������������
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	printf("����֮ǰ��a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("����֮��a=%d b=%d\n", a, b);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include <stdio.h>
//
//void Printf(int n)
//{
//	if (n > 9)
//	{
//		Printf(n / 10);
//	}
//		printf("%d ",n % 10);
//
//}
//
//int main()
//{
//	int i = 0;
//	printf("������һ������\n");
//	scanf("%d", &i);
//	Printf(i);
//
//	return 0;
//}


////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
////�ǵݹ鷽��
//#include <stdio.h>
//int Fac(int n,int* num)
//{
//	while (n > 1)
//	{
//		*num = *num * n;
//		n--;
//	}
//	return* num;
//}
//
//int main()
//{
//	int n;
//	int num = 1;
//	printf("������һ����n\n");
//	scanf("%d", &n);
//	Fac(n,&num);
//	printf("%d", num);
//	return 0;
//}

////�ݹ鷽��
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	printf("������һ����n\n");
//	scanf("%d", &n);
//	int num = Fac(n);
//	printf("num = %d\n", num);
//	
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�ʵ��strlen
//#include <stdio.h>
//int Strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = Strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//�ݹ�ʵ��strlen
int Strlen(char* str)
{
	if (*str != '\0')
		return 1 + Strlen(str + 1);//str++
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int len = Strlen(arr);
	printf("%d\n", len);

	return 0;
}

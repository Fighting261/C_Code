#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
////���ַ�
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int k = 6;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}			
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����\n");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//������С��Ϸ
void menu()
{
	printf("****************************\n");
	printf("********1.��ʼ��Ϸ**********\n");
	printf("********0.�˳���Ϸ**********\n");
	printf("****************************\n");
}
void game()
{
	int guess = 0;
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������֣�->");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		    break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		    break;
		}
	} while (input);

	return 0;
}

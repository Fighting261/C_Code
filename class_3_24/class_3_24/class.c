#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "Hello World!!!!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ĵ��Խ���һ����֮�ڹرգ����룺��������ȡ���ر�!\n������:>");
		scanf("%s", input);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
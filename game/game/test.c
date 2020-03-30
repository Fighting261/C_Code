#include "game.h"

//�˵�
void menu()
{
	printf("\n*************************\n");
	printf("*****    1. play    *****\n");
	printf("*****    0. exit    *****\n");
	printf("*************************\n");
}

void game()
{
	//����׵���Ϣ������ʾ
	char mine[ROWS][COLS] = { '0' };
	//�Ų��׵���Ϣ����ʾ
	char show[ROWS][COLS] = { '*' };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//������
	SetMine(mine, ROW, COL);
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);//����ʾ
	DisplayBoard(show, ROW, COL);//��ʾ
	//�Ų���
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
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
		    printf("�������������ѡ��");
		    break;
		}
	} while (input);

	return  0;
}
#include "game.h"

//菜单
void menu()
{
	printf("\n*************************\n");
	printf("*****    1. play    *****\n");
	printf("*****    0. exit    *****\n");
	printf("*************************\n");
}

void game()
{
	//存放雷的信息，不显示
	char mine[ROWS][COLS] = { '0' };
	//排查雷的信息，显示
	char show[ROWS][COLS] = { '*' };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);//不显示
	DisplayBoard(show, ROW, COL);//显示
	//排查雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
		    break;
		case 0:
		    printf("退出游戏\n");
		    break;
		default:
		    printf("输入错误，请重新选择");
		    break;
		}
	} while (input);

	return  0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void meun()
{
	printf("********************\n");
	printf("*******1.paly*******\n");
	printf("*******2.exit*******\n");
	printf("********************\n");
}

void print(char a[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" ");
	for (j = 0; j < col; j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);
		for (j = 0; j < col; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}

void change(char a[ROW][COL], int x, int y, char n)
{
	a[x][y] = n;
}

int computer()
{
	int ret = rand() % 10 + 1;
	while (ret > 2)
	{
		ret = 9 % ret;
	}
	return ret;
}

int judge(char a[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	if ((a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][2] == '#') || (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][2] == '#') || (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][2] == '#')
		|| (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[2][0] == '#') || (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[2][1] == '#') || (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[2][2] == '#')
		|| (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] == '#') || (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[2][0] == '#'))
	{
		return 1;
	}
	if ((a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][2] == 'o') || (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][2] == 'o') || (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][2] == 'o')
		|| (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[2][0] == 'o') || (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[2][1] == 'o') || (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[2][2] == 'o')
		|| (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] == 'o') || (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[2][0] == 'o'))
	{
		return 2;
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (a[i][j] != 0)
				count++;
		}
	}
	if (count == 9)
		return 3;
	else
		return 4;
}

void game()
{
	char arr[ROW][COL] = { 0 };
	int player_x = 0;
	int player_y = 0;
	int computer_x = 0;
	int computer_y = 0;
	int flag = 0;
	while (1)
	{
		printf("玩家请输入落子的坐标：> ");
		scanf("%d,%d", &player_x, &player_y);
		change(arr, player_x, player_y, '#');
		print(arr, ROW, COL);
		printf("电脑落子:\n");
		computer_x = computer();
		computer_y = computer();
		while (1)
		{
			if ((computer_x == player_x) && (computer_y == player_y))
			{
				computer_x = computer();
				computer_y = computer();
			}
			else if (arr[computer_x][computer_y] != 0)
			{
				computer_x = computer();
				computer_y = computer();
			}
			else
				break;
		}
		change(arr, computer_x, computer_y, 'o');
		print(arr, ROW, COL);
		flag = judge(arr, ROW, COL);
		if (flag == 3)
		{
			printf("平局\n");
			break;
		}
		else if (flag == 1)
		{
			printf("玩家赢了\n");
			break;
		}
		else if (flag == 2)
		{
			printf("玩家输了\n");
			break;
		}
		else
			;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{
		meun();
		printf("请输入：> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
				  game();
				  break;
		}
		case 2:
		{
				  printf("exit\n");
				  break;
		}
		default:
		{
				   printf("输入错误\n");
				   break;
		}
		}
	}
	return 0;
}
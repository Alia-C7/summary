#define _CRT_SECURE_NO_WARNINGS 1
//������  3��3������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��ӡ�˵�  �Ƿ�����Ϸ
void menu()
{
	printf("********************\n");
	printf("*******1.paly*******\n");
	printf("*******2.exit*******\n");
	printf("********************\n");
}

//��ӡ�˵�  ˭������
void menu0()
{
	printf("********************\n");
	printf("***1.palyer_first***\n");
	printf("**2.computer_first**\n");
	printf("********************\n");
}

//��ʼ������
void initial(char a[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a[i][j] = '__';
		}
	}
}

//��ӡ����
void print(char a[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  ");
	for (i = 0; i < col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);
		for (j = 0; j < col; j++)
		{
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}

//�������
void player(char a[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	while (1)
	{
		printf("\n������������ӵ����꣺>\n");
		scanf("%d, %d", &x, &y);
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < row; j++)
			{
				if (a[i][j] == 'o' || a[i][j] == '#')
					count++;
			}
		}
		if (count == 9)
		{
			printf("�����������ȴ����\n");
			break;
		}
		while (x >= row || y >= col || a[x][y] == 'o' || a[x][y] == '#')
		{
			printf("����ʧ�ܣ��������������꣺>\n");
			scanf("%d, %d", &x, &y);
		}
		a[x][y] = '#';
		print(a, row, col);
		break;
	}
}

//��������
void computer(char a[][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int x = rand() % 10;
	int y = rand() % 10;
	while (1)
	{
		printf("\n�������ӣ�>\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < row; j++)
			{
				if (a[i][j] == 'o' || a[i][j] == '#')
					count++;
			}
		}
		if (count == 9)
		{
			printf("�����������ȴ����\n");
			break;
		}
		while (x >= row || y >= col || a[x][y] == '#' || a[x][y] == 'o' || x < 0 || y < 0)
		{
			x = rand() % 10;
			y = rand() % 10;
			x = (x - ROW) / ROW;
			y = (y - COL) / COL;
		}	
		a[x][y] = 'o';
		print(a, row, col);
		break;
	}
}

//�ж���Ӯ
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
			if (a[i][j] == '#' || a[i][j] == 'o')
				count++;
		}
	}
	if (count == 9)
		return 3;
	else
		return 4;
}

//���������
void player_first(char arr[][COL],int row, int col)
{
	int ret = 0;
	initial(arr, ROW, COL);
	print(arr, ROW, COL);
	while (1)
	{
		player(arr, ROW, COL);
		ret = judge(arr, ROW, COL);
		if (ret == 1)
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (ret == 2)
		{
			printf("�������\n");
			break;
		}
		else if (ret == 3)
		{
			printf("ƽ��\n");
			break;
		}
		else
			;
		computer(arr, ROW, COL);
		ret = judge(arr, ROW, COL);
		if (ret == 1)
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (ret == 2)
		{
			printf("�������\n");
			break;
		}
		else if (ret == 3)
		{
			printf("ƽ��\n");
			break;
		}
		else
			;
	}
}

//��������
void computer_first(char arr[][COL], int row, int col)
{
	int ret = 0;
	initial(arr, ROW, COL);
	print(arr, ROW, COL);
	while (1)
	{
		computer(arr, ROW, COL);	
		ret = judge(arr, ROW, COL);
		if (ret == 1)
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (ret == 2)
		{
			printf("�������\n");
			break;
		}
		else if (ret == 3)
		{
			printf("ƽ��\n");
			break;
		}
		else
			;
		player(arr, ROW, COL);
		ret = judge(arr, ROW, COL);
		if (ret == 1)
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (ret == 2)
		{
			printf("�������\n");
			break;
		}
		else if (ret == 3)
		{
			printf("ƽ��\n");
			break;
		}
		else
			;
	}
}

//��Ϸ��ʼ
void game(int input)
{
	int choice = 0;
	char arr[ROW][COL] = { 0 };
	menu0();
	printf("��ѡ��>\n");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		player_first(arr, ROW, COL);
		break;
	case 2:
		computer_first(arr, ROW, COL);
		break;
	default:
		printf("�������\n");
		break;
		}	
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{
		menu();
		printf("�����룺> ");
		scanf("%d", &input);
		switch (input){
		case 1:
		{
			 game(input);
			 break;
		}
		case 2:
		{
			printf("exit\n");
			break;
		}
		default:
		{
			printf("�������\n");
			break;
		}
		}
	}
	return 0;
}
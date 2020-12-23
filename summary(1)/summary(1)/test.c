#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写代码将三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a%b != 0)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = a%tmp;
//		a = tmp;
//	}
//	c = b;
//	printf("%d\n", c);
//	return 0;
//}

//非函数打印1000年到2000年之间的闰年
//能被4整除并且不能被100整除 或者能被400整除
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 )
//		{
//			printf("%d ", i);
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//使用函数判断一个年份是否为闰年
//int judge(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		return 1;
//	}
//	if (i % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = judge(n);
//	if (ret == 1)
//	{
//		printf("%d是闰年\n",n);
//	}
//	else
//		printf("%d不是闰年\n", n);
//	return 0;
//}

////非函数打印100~200之间的素数
//int main()
//{
//	int n = 100;
//	int i = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n%i == 0)
//				break;
//		}
//		if (i == n)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数
//int is_prime(int n)
//{
//	int i = 1;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			break;
//		}
//	}
//	if (i == n)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int n = 100;
//	for (n = 100; n <= 200; n++)
//	{
//		if (is_prime(n) == 1)
//		{
//			printf("%d ", n);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//非函数交换两个整数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d  %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	tmp = b;
//	b = a;
//	a = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//非函数交换两个整数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

////使用函数交换两个整数
//void change(int* n, int *m)
//{
//	int tmp = 0;
//	tmp = *n;
//	*n = *m;
//	*m = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	change(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//	return 0;
//}

//使用函数交换两个整数
//void change(int* n, int *m)
//{
//	*n = *n^*m;
//	*m = *n^*m;
//	*n = *n^*m;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	change(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//	return 0;
//}

//实现打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	printf("\n");
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	return 0;
//}

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//void find(int a[], int left, int right,int k)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &k);
//	find(arr, left, right, k);
//	return 0;
//}

//猜数字游戏
//#include <time.h>
//#include <stdlib.h>
//void meun()
//{
//	printf("********************\n");
//	printf("*****1.  play  *****\n");
//	printf("*****2.  exit  *****\n");
//	printf("********************\n");
//
//}
//
//void play()
//{
//	int n = rand() % 100 + 1;
//	int m = 0;
//	while (1)
//	{
//		printf("请猜数字：>\n");
//		scanf("%d", &m);
//		if (m < n)
//		{
//			printf("猜小了\n");
//		}
//		else if (m>n)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	while (1)
//	{
//		meun();
//		printf("请输入：>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，重新输入\n");
//			break;
//		}
//	}
//	return 0;
//}

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到

//void find(int a[], int left, int right,int k)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	find(arr, left, right,k);
//}

//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("******1. play ******\n");
//	printf("******2. exit ******\n");
//	printf("********************\n");
//}
//
//void play()
//{
//	int num = rand() % 100 + 1;
//	int a = 0;
//	while (1)
//	{
//		printf("请猜数字：>\n");
//		scanf("%d", &a);
//		if (a < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (a>num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	while (1)
//	{
//		menu();
//		printf("请输入：>\n");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//		{
//			play();
//			break;
//		}
//		case 2:
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		default:
//		{
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//		}
//	}
//	return 0;
//}
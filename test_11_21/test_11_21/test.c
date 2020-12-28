#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//while 语句中的break 
//永久终止循环
//例
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//while 语句中的continue 
//continue 后面的代码不会执行  直接去下一次的判断部分
//例
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//字符读取时如何清空上一次缓冲区
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认（Y/N）：");
//	//清空缓冲区
//	//getchar(); //一次getchar只能拿走一个字符 因此不太合理  
//	//合理的清空缓冲区
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int  ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//for 语句中的break 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//for 语句中的continue 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//以下程序的结果是首先会越界访问 并且程序死循环打印hehe
//首先arr[12]之前的值全是0 并且arr[12]与i就是同一个空间
//因此这个原因是在循环体内更改了循环变量  因此程序崩溃
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe");
//	}
//	return 0;
//}

//会出现什么问题？分析原因？ 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe");
//		}
//	}
//	return 0;
//}

//do while 语句中的break 
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//do while 语句中的continue 
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue ;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int result = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		result = result*i;
//	}
//	printf("%d\n", result);
//	return 0;
//}

// 计算 1!+2!+3!+……+10!
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 10;
//	int result = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = result*j;
//		}
//		sum = sum + result;
//		result = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 计算 1!+2!+3!+……+10!(优化后)
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int result = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		result = result*i;
//		sum = sum + result;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


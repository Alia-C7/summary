#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置
//void reverse(int* n,int num)
//{
//	int j = 0;
//	int tmp = 0;
//	for (j = 0; j <= num/2; j++)
//	{
//		tmp = n[j];
//		n[j] = n[num-j];
//		n[num-j] = tmp;
//	}
//}
//void init(int* n, int right)
//{
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		n[i] = 0;
//	}
//}
//void print(int* n, int right)
//{
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		printf("%d ", n[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[10] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
//	int right_b = 0;
//	right_b = sizeof(a) / sizeof(a[0]) - 1;
//	right_c = sizeof(c) / sizeof(c[0]) - 1;
//	print(a, right_b);
//	init(a, right_b);
//	print(a, right_b);	
//	reverse(b, right_b);
//	print(b, right_b);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换
//void change(int* n, int* m,int num)
//{
//	int j = 0;
//	int tmp = 0;
//	for (j = 0; j <=num;j++)
//	{
//		tmp = n[j];
//		n[j] = m[j];
//		m[j] = tmp;
//	}
//}
//void print(int* n,int right)
//{
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		printf("%d ", n[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int right = 0;
//	right = sizeof(a) / sizeof(a[0]) - 1;
//	print(a,right);
//	printf("\n");
//	print(b, right);
//	printf("\n");
//	change(a, b,right);
//	print(a, right);
//	printf("\n");
//	print(b, right);
//	printf("\n");
//	return 0;
//}

//实现一个对整形数组的冒泡排序
void Bubble(int* a,int x,int y)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (j = y; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			if (a[i] < a[i + 1])
			{
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
		}
	}
}

void print(int* a, int y)
{
	int i = 0;
	for (i = 0; i <= y; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = 0;
	left = 0;
	right = sizeof(arr) / sizeof(arr[0]) - 1;
	print(arr, right);
	Bubble(arr,left,right);
	print(arr, right);
	return 0;
}
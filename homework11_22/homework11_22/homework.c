#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字游戏
//void information()
//{
//	printf("***************\n");
//	printf("1.play    2.exit\n");
//	printf("***************\n");
//	printf("请输入：<");
//}
//
//void play()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &num);
//		if (ret > num)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < num)
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
//	int input;
//	srand((unsigned int)time(NULL));
//	while(1)
//	{
//		information();
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			play();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择：\n");
//			break;
//		}
//	}
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int left = 0;
//	int mid;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//乘法口诀表1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int result = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%d ", i,j,result);
//		}
//		printf("\n");
//	}
//	
//	printf("\n");
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果1
//int main()
//{
//	int i = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2 == 0)
//			sum = sum - 1.0 / i;
//		else 
//			sum = sum + 1.0 / i;
//	}
//	printf("%f\n",sum);
//	return 0;
//}

//求10 个整数中最大值1
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);		
//	}
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j]  > max)
//			max = arr[j];
//	}
//	printf("%d\n", max);
//	return 0;
//}
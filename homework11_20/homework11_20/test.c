#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写代码将三个数按从大到小输出
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d %d",&a,&b,&c);//获取三个整数
	if (a < b)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp;
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c)
	{
		int tmp;
		tmp = c;
		c = b;
		b = tmp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}

////打印1到100内是3的倍数的数字
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	printf("\n");
//	return 0;
//}
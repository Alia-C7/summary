#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//д���뽫���������Ӵ�С���
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d %d",&a,&b,&c);//��ȡ��������
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

////��ӡ1��100����3�ı���������
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//д���뽫���������Ӵ�С���
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

//���������������������������Լ��
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

//�Ǻ�����ӡ1000�굽2000��֮�������
//�ܱ�4�������Ҳ��ܱ�100���� �����ܱ�400����
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

//ʹ�ú����ж�һ������Ƿ�Ϊ����
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
//		printf("%d������\n",n);
//	}
//	else
//		printf("%d��������\n", n);
//	return 0;
//}

////�Ǻ�����ӡ100~200֮�������
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

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮�������
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

//�Ǻ���������������
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

//�Ǻ���������������
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

////ʹ�ú���������������
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

//ʹ�ú���������������
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

//ʵ�ִ�ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	return 0;
//}

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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

//��������Ϸ
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
//		printf("������֣�>\n");
//		scanf("%d", &m);
//		if (m < n)
//		{
//			printf("��С��\n");
//		}
//		else if (m>n)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("�����룺>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("���������������\n");
//			break;
//		}
//	}
//	return 0;
//}

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���

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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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

//��������Ϸ
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
//		printf("������֣�>\n");
//		scanf("%d", &a);
//		if (a < num)
//		{
//			printf("��С��\n");
//		}
//		else if (a>num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("�����룺>\n");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//		{
//			play();
//			break;
//		}
//		case 2:
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		default:
//		{
//			printf("�����������������\n");
//			break;
//		}
//		}
//	}
//	return 0;
//}
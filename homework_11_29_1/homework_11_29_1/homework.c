#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ݹ�ʵ�����n��쳲�������
//int fib(int a)
//{
//	if (a > 2)
//	{
//		return fib(a - 1) + fib(a - 2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 1;
//	int n = 0;
//	scanf("%d", &n);
//	num = fib(n);
//	printf("%d\n", num);
//	return 0;
//}

//�ǵݹ�ʵ�����n��쳲�������
//int main()
//{
//	int pre_num = 1;
//	int next_num = 1;
//	int num = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d",&n);
//	for (i = 3; i <= n; i++)
//	{
//		pre_num = next_num;
//		next_num = num;
//		num = pre_num + next_num;
//	}
//	printf("%d\n", num);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//int power(int n,int k)
//{
//	if (n > 0 && k>0)
//	{
//		return  n * power(n,k-1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int result = 0;
//	scanf("%d %d",&n,&k);
//	result = power(n,k);
//	printf("%d\n",result);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return  n % 10 + DigitSum(n / 10);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	scanf("%d",&input);
//	sum = DigitSum(input);
//	printf("%d\n",sum);
//	return 0;
//}

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);	
//		printf("%c", *(string));
//	}
//	
//}
//
//int main()
//{
//	char* p = "abcdef";
//	reverse_string(p);
//	printf("\n");
//	return 0;
//}

//�ݹ�ʵ��strlen
//int Strlen(char* n)
//{
//	int count = 0;
//	if (*n == '\0')
//	{
//		return 0;
//	}
//	return 1+Strlen(n+1);
//}
//
//int main()
//{
//	char* p = "abcdef";
//	int len = 0;
//	len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
//�ǵݹ�ʵ��strlen
//#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));
//	return 0;
//}

//�ݹ�ʵ����n�Ľ׳ˣ���������������⣩
//int Factorials(x)
//{
//	if (x > 1)
//		return x*Factorials(x-1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int input = 0;
//	int result = 0;
//	scanf("%d", &input);
//	result = Factorials(input);
//	printf("%d\n", result);
//	return 0;
//}
//
//�ǵݹ�ʵ����n�Ľ׳ˣ���������������⣩
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int result = 1;
//	scanf("%d", &input);
//	for (i = 1; i <= input; i++)
//	{
//		result = result*i;
//	}
//	printf("%d\n", result);
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(a)
//{
//	if (a > 9)
//	{
//		print(a/10);
//	}
//	printf("%d ",a%10);
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	print(input);
//	printf("\n");
//	return 0;
//}
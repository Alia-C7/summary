#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//while ����е�break 
//������ֹѭ��
//��
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

//while ����е�continue 
//continue ����Ĵ��벻��ִ��  ֱ��ȥ��һ�ε��жϲ���
//��
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

//�ַ���ȡʱ��������һ�λ�����
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N����");
//	//��ջ�����
//	//getchar(); //һ��getcharֻ������һ���ַ� ��˲�̫����  
//	//�������ջ�����
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int  ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//for ����е�break 
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

//for ����е�continue 
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

//���³���Ľ�������Ȼ�Խ����� ���ҳ�����ѭ����ӡhehe
//����arr[12]֮ǰ��ֵȫ��0 ����arr[12]��i����ͬһ���ռ�
//������ԭ������ѭ�����ڸ�����ѭ������  ��˳������
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

//�����ʲô���⣿����ԭ�� 
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

//do while ����е�break 
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

//do while ����е�continue 
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

//����n�Ľ׳�
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

// ���� 1!+2!+3!+����+10!
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

// ���� 1!+2!+3!+����+10!(�Ż���)
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


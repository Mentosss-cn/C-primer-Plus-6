//#include <stdio.h>
//int main()
//{
//	//����һ������
//	//����	����������	=����ֵ��	��ֵ��
//	//����	����������;//�﷨�������Ƽ�
//	//��������
//	int age = 20;
//	//��������
//	double weight = 75.3;
//	//��������
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n",age);
//	printf("%lf\n",weight);
//	return 0;
//}
///////////////////////////////////////////////
//#include <stdio.h>
//
//int a = 100;//ȫ�ֱ���-{}�ⲿ����
//
//int main()
//{
//	//��ȫ�ֱ����;ֲ��������ִ��ڳ�ͻ������£��ֲ���������
//	int a = 10;//�ֲ�����-{}�ڲ�����
//	printf("%d", a);
//	return 0;
//}
///////////////////////////////////////////////////
//дһ�����������������ĺ�
#define _CRT_SECURE_NO_WARNINGS 1//���ڵ�һ��
#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}
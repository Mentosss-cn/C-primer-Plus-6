
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX  10000;


//�������������
//#include <stdio.h>
//int main()
//{
	//1.���泣��
	//3.14;//����ı䣬����3.14(����������)

	//10;//��������

	//'a';//�ַ�����

	//"abcdef";//�ַ�������

	//2.const���εĳ�����
/*  const int num = 10;//num�������,���const��numΪ�����������г�����(���ܸı������)
	num = 20;
	printf("num = %d", num);

	int arr[10] = { 0 };

	const int n = 10;//const���κ���г����ԡ������ʻ���һ��������eg��һ���й��˼������������������ʻ���һ���й��ˣ�
	int arr2[n] = { 0 };//n��Ҫһ������  */

	//3.#define����ı�ʶ������
	/*int n = MAX;
	printf("n = %d",n);*/

//	return 0;
//}

//2.const���εĳ�����
//3.#define����ı�ʶ������
//ö�ٳ���

	//4.ö�ٳ���
	//����һһ�оٵĳ���
	/*
	eg:�Ա���ɫ�����ڵȡ�����
	*/
#include <stdio.h>



	//�Ա�
enum Sex
{
	//����ö�����ͱ���δ������ȡֵ
	MALE = 3,//�������ֵ������ֵ
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = SECRET;
	printf("s= %d", s);
	return 0;
};


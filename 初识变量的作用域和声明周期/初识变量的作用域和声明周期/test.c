#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������������
// 
//�������������ڣ���������������֮���ʱ���

//ȫ�ֱ�������������������
//ȫ�ֱ������������ڣ�������������ڣ�main������
int g_avl = 2021;//ȫ�ֱ���

//��������
extern int ppl;

int main()
{
	printf("1g_avl = %d\n", g_avl);
	{
		//�ֲ������������򣺾ֲ��������ڵķ�Χ
		//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
		int a = 10;

		printf("a = %d\n", a);
	}
	printf("2g_avl = %d\n", g_avl);
	printf("3g_avl = %d\n", g_avl);

	//��������
	printf("1.ppl=%d\n", ppl);

	return 0;
}
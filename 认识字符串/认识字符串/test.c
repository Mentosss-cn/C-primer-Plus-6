#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>
//�ַ���������һ���ַ�������˫������������һ���ַ�
int main()
{		
	"Hello World";//�ַ���
	//�ַ����顪��������һ��������˼/��һ����ͬ���͵�Ԫ�أ�
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//	\0���ַ����Ľ�����־
	char arr[] = "Hello World";

	char arr1[] = "abc";//��ӡ���abc
	char arr2[] = { 'a','b','c'};//��ӡ���abc+����
	char arr3[] = { 'a','b','c','\0'};//��ӡ���abc
							//���֤���ַ����Ľ�����־��\0

	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	//���ַ�������
	int len = strlen("abc");//string length
	printf("%d", len);
	printf("%lld\n",strlen(arr1));
	printf("%lld\n",strlen(arr2));
	


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>
//字符串：就是一串字符——用双引号引起来的一串字符
int main()
{		
	"Hello World";//字符串
	//字符数组——数组是一组数的意思/（一种相同类型的元素）
	//字符串在结尾的位置隐藏了一个\0的字符
	//	\0是字符串的结束标志
	char arr[] = "Hello World";

	char arr1[] = "abc";//打印输出abc
	char arr2[] = { 'a','b','c'};//打印输出abc+乱码
	char arr3[] = { 'a','b','c','\0'};//打印输出abc
							//充分证明字符串的结束标志是\0

	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	//求字符串长度
	int len = strlen("abc");//string length
	printf("%d", len);
	printf("%lld\n",strlen(arr1));
	printf("%lld\n",strlen(arr2));
	


	return 0;
}
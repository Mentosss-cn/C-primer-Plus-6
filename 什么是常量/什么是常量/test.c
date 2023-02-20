
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX  10000;


//常量：不变的量
//#include <stdio.h>
//int main()
//{
	//1.字面常量
	//3.14;//不会改变，就是3.14(浮点数常量)

	//10;//整数常量

	//'a';//字符常量

	//"abcdef";//字符串常量

	//2.const修饰的常变量
/*  const int num = 10;//num本身变量,添加const—num为常变量—具有常属性(不能改变的属性)
	num = 20;
	printf("num = %d", num);

	int arr[10] = { 0 };

	const int n = 10;//const修饰后具有常属性—但本质还是一个变量（eg：一个中国人加入美国国籍，但本质还是一个中国人）
	int arr2[n] = { 0 };//n需要一个常量  */

	//3.#define定义的标识符常量
	/*int n = MAX;
	printf("n = %d",n);*/

//	return 0;
//}

//2.const修饰的常变量
//3.#define定义的标识符常量
//枚举常量

	//4.枚举常量
	//可以一一列举的常量
	/*
	eg:性别、颜色、日期等。。。
	*/
#include <stdio.h>



	//性别
enum Sex
{
	//这种枚举类型变量未来可能取值
	MALE = 3,//不算更改值，赋初值
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = SECRET;
	printf("s= %d", s);
	return 0;
};


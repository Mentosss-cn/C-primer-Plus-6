//#include <stdio.h>
//int main()
//{
//	//创建一个变量
//	//类型	变量的名字	=（赋值）	数值；
//	//类型	变量的名字;//语法允许但不推荐
//	//描述年龄
//	int age = 20;
//	//描述体重
//	double weight = 75.3;
//	//年龄增加
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n",age);
//	printf("%lf\n",weight);
//	return 0;
//}
///////////////////////////////////////////////
//#include <stdio.h>
//
//int a = 100;//全局变量-{}外部定义
//
//int main()
//{
//	//当全局变量和局部变量名字存在冲突的情况下，局部变量优先
//	int a = 10;//局部变量-{}内部定义
//	printf("%d", a);
//	return 0;
//}
///////////////////////////////////////////////////
//写一个代码求两个整数的和
#define _CRT_SECURE_NO_WARNINGS 1//放在第一行
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
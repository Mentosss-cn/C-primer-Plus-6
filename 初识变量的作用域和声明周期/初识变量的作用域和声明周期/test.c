#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作用域和生命周期
// 
//变量の生命周期：变量创建和销毁之间的时间段

//全局变量的作用域：整个工程
//全局变量的生命周期：程序的生命周期（main函数）
int g_avl = 2021;//全局变量

//声明变量
extern int ppl;

int main()
{
	printf("1g_avl = %d\n", g_avl);
	{
		//局部变量的作用域：局部变量所在的范围
		//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
		int a = 10;

		printf("a = %d\n", a);
	}
	printf("2g_avl = %d\n", g_avl);
	printf("3g_avl = %d\n", g_avl);

	//声明变量
	printf("1.ppl=%d\n", ppl);

	return 0;
}
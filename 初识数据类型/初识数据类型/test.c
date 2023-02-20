
//'a'——字符a

#include <stdio.h>
int main()
{
	//字符类型
	char ch = 'a';
	//整型
	int age = 20;
	//短整型
	short num = 10;
	//浮点数
	float weight = 55.5;
	//printf("%d\n", age);
	//printf("%d\n", 100);
	printf("%lld\n", sizeof(char));
	printf("%lld\n", sizeof(short));
	printf("%lld\n", sizeof(int));
	printf("%lld\n", sizeof(long));
	printf("%lld\n", sizeof(long long));
	printf("%lld\n", sizeof(long long));
	printf("%lld\n", sizeof(float));
	printf("%lld\n", sizeof(double));
	return 0;
}


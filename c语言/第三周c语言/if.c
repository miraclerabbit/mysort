//	max3.c
#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);//输入需要比较的三个数 

	int max = 0;//定义单一出口存放最大的那个数 

	if ( a>b ) {
		if ( a>c ) {
			max = a;
		} else {
			max = c;
		}
	} else {
		if ( b>c ) {
			max = b;
		} else {
			max = c;
		}
	}

	printf("The max is %d\n", max);//单一出口原则 

	return 0;
}

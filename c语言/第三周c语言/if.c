//	max3.c
#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);//������Ҫ�Ƚϵ������� 

	int max = 0;//���嵥һ���ڴ�������Ǹ��� 

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

	printf("The max is %d\n", max);//��һ����ԭ�� 

	return 0;
}

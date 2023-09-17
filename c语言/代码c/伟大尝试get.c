#include <stdio.h>
int main()
{
	int i;
	int a[10]={};

		printf("输出的a的值为%d\n",a);
	printf("输出的a的值为%p\n",a);
printf("输出的a的值为%x\n",&a);

	for(i=0;i<10;i++)
	{
		printf("输出的a的值为%d\n",rand());	
	}
	
	
	return 0;
}

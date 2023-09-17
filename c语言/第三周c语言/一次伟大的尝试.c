#include <stdio.h>
int main()
{
	/*完成比较数值的输入*/
	int a,b;
	scanf("%d %d",&a,&b);
	
		/*完成数值比较并得到较大的那个数*/
		int max;
		if(a>=b)
		{
			max=a;
		}else{
			
			max=b;
		};
	
		/*输出较大的那个数*/
		printf("较大的那个值是%d",max);
	return 0;
}

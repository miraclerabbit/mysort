/*这是一个巨大的挑战*/
#include <stdio.h>
int main ()
{
//这个程序用来计算n的阶乘
// n的输入
     int n;
	  printf("请输入你想求阶乘的数字\n");
	  scanf("%d",&n);
	  int i=1;
	  int fact=1;
	  while(i<=n){
	  	fact=fact*i;
	  	i++;
	  	
	  }
	  printf("你所求的%d的阶乘为%d",n,fact);
	
	
	
	
	
	
	return 0;
}

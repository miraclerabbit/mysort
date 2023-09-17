/*这是一个巨大的挑战*/
#include <stdio.h>
int main ()
{
//这个程序用来计算n的阶乘
// n的输入
// 这里注意俩问题，大胆创造变量大胆些，大胆假设小心求证就行，然后for里面的用分号隔开来 
     int n;
	  printf("请输入你想求阶乘的数字\n");
	  scanf("%d",&n);
	  int i;
	  int fact=1;
	  for(i=1;i<=n;i++){
	  	fact=fact*i;
	  	
	  }
	  printf("你所求的%d的阶乘为%d",n,fact);
	
	
	
	
	
	
	return 0;
}

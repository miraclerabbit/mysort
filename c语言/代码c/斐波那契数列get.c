//这是一个伟大的斐波 那契数列
#include <stdio.h>
 int feibo(int ,int a[]); 
int main()
{
	int a[100]={0,1};
	int x;
	for(x=2;x<100;x++){
		
		a[x]=feibo(x,a);
		
	}
	
	for(x=0;x<100;x++){
		printf("a[%d]=%d\n",x,a[x]);
	}
	
	
	
	
	
	return 0;
 } 
 
 int feibo(int x,int a[])
 {
 	
 	a[x]=a[x-1]+a[x-2];
 	
 	
 	
 	
 	return a[x];
 }

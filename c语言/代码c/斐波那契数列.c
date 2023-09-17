//这是一个伟大的斐波 那契数列
#include <stdio.h>
 int feibo(int ,int a[]); 
 int feibo(int ,int a[]); 
int main()
{
	int a[100]={0,1}; // 斐波那契数列是从 1  1  开始的  
	int x;
	for(x=2;x<100;x++){
		
		a[x]=feibo(x,a);  // 这里呀 其实不需要返回值了哦  因为已经用指针修改了变量的值 
		
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

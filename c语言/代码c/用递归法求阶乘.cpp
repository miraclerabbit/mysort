//用递归法求n的阶乘
#include <stdio.h>
#include <iostream>
using namespace std;
int jiecheng(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*jiecheng(n-1) ; //递归的核心代码 
	}
} 
int main(void){
	
	
	int n;
	cout<<"请输入一个正整数："<<endl;  //这里的正整数不能太大不然会超出计算机的运算范围 
	scanf("%d",&n);
	int k=jiecheng(n);
	printf("%d的阶乘是%d",n,k);
	return 0;
}

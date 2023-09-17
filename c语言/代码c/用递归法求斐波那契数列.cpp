// 用递归法求斐波那契数列 
#include <stdio.h>
int Fibo(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return Fibo(n-1)+Fibo(n-2);
	}
}
int main(void){
	int a[10000];
	int i;
	for(i=0;i<10000;i++){
		a[i]=Fibo(i);
	}
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	
	
	return 0;
} 

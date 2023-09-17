//我要写一个程序，实现找出我输入的两个数字之间的所有素数
/* isprime=1;
		for( k=2;k<i;k++){
			if(i%k==0){
				isprime=0;
				break;
				
			}
			}if(isprime==1){
				sushu[cnt]=i;
				sum+=i;
				cnt++;*/
#include <stdio.h>
#include <cmath>
void main()
{
	int m,n;
	//此处默认n大于m
	printf("请输入两个整数m和n，且保证n大于m\n"); 
	scanf("%d %d",&m,&n);
	int sun=0;
	int cnt=0;
	int sushu[n];
	int i;

	int isprime;
	int k;
	int sum;
	int g;
	if(m!=-1){
		if(m==1){
			m=2;
		}
	for( i=m;i<=n;i++){
		 isprime=1;
		for( k=2;k<sqrt(i)+1;k++){
			if(i%k==0){
				isprime=0;
				break;
				
			}
			}if(isprime==1){
				sushu[cnt++]=i;
				sum+=i;
				
				
				
				
			}
			
			
			
			
			
		}
		
		
		
	}
	
	
	for( g=0;g<cnt;g++){
   	printf("%d则m与n之间的素数为%d\n",g,sushu[g])
;   	
   	
   }	
	
	
		
		
		} 
	
	


	
	
	
 

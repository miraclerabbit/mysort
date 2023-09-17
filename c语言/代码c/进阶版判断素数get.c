#include <stdio.h>//判断素数进阶版

#include <math.h> 
int main(void)
 {
 	int i;
 	int x;
 	scanf("%d",&x);
    int result=1;//result 1是素数；0不是素数
	if(x==1||x==2){
		
	}else{
		if(x%2==0){
			result=0;
		}else{
		
			for(i=3;i<sqrt(x)+1;i=i+2){   //sqrt  是输入double  返回double的  ，这种东西需要用了+1！！ 
				if(x%i==0){
					result=0;
					break;
					
				}
				
				
				
			}
			
			
			
			
		}
		
		
		
		
		
	}
 	
 	if(result==1){
 		printf("%d是素数",x);
	 }else{
	 	printf("%d不是素数",x);
	 }
 	
 	
 	return 0;
 	
 	
 	
 	
 }

#include <stdio.h>//�ж��������װ�

#include <math.h> 
int main(void)
 {
 	int i;
 	int x;
 	scanf("%d",&x);
    int result=1;//result 1��������0��������
	if(x==1||x==2){
		
	}else{
		if(x%2==0){
			result=0;
		}else{
		
			for(i=3;i<sqrt(x)+1;i=i+2){   //sqrt  ������double  ����double��  �����ֶ�����Ҫ����+1���� 
				if(x%i==0){
					result=0;
					break;
					
				}
				
				
				
			}
			
			
			
			
		}
		
		
		
		
		
	}
 	
 	if(result==1){
 		printf("%d������",x);
	 }else{
	 	printf("%d��������",x);
	 }
 	
 	
 	return 0;
 	
 	
 	
 	
 }

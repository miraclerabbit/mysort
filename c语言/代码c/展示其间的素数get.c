//��Ҫдһ������ʵ���ҳ����������������֮�����������
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
	//�˴�Ĭ��n����m
	printf("��������������m��n���ұ�֤n����m\n"); 
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
   	printf("%d��m��n֮�������Ϊ%d\n",g,sushu[g])
;   	
   	
   }	
	
	
		
		
		} 
	
	


	
	
	
 

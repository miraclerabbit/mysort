//  ���������Ϊ��ͨ��������Ϸչʾ���ֲ��ҵ�˼��
#include <stdio.h>
#include "�ݹ���ֲ���.cpp"   //  ��ϵͳ����Ҫ�á��� ������������  ���������� 
int main(void)
{
	int target=5;
	int a[5]={1,2,3,4,5,};
	printf("�ҵ������=%d",erfen(a,target,0,4));
/*	int x;
	scanf("%d",&x);  //x��������������������� ��������Ҫ��Χ��1-100
	int head=1,last=100;
	int cai;
	int zhaodao=1;//�������˾ͽ����ֵ��ֵΪ0��
	while (zhaodao)
	{
		cai=(head+last)/2;
		if(cai==x){
			zhaodao=0;//�ҵ��ˣ� 
		}else{
			if(cai>x){
				last=cai;
			}else{
				head=cai;
			}
			
		}
		printf("%d",cai);
	*/	
		
		return 0; 
	}
	 
	
	
	
	
	


//����һ��ΰ���쳲� ��������
#include <stdio.h>
 int feibo(int ,int a[]); 
 int feibo(int ,int a[]); 
int main()
{
	int a[100]={0,1}; // 쳲����������Ǵ� 1  1  ��ʼ��  
	int x;
	for(x=2;x<100;x++){
		
		a[x]=feibo(x,a);  // ����ѽ ��ʵ����Ҫ����ֵ��Ŷ  ��Ϊ�Ѿ���ָ���޸��˱�����ֵ 
		
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

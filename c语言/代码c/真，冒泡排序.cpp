//��tm����������ð������
//��β������Ͳ�Ҫ���� �������Ż�����Ҫ֪��
//��һ�������һ��û�н�����break  ���������Ż�
//�ڶ��� ÿ�˽���֮�� ������󽻻���λ�� ��һ�˽������ϴμ��µ���󽻻���λ�þ��� 
#include <stdio.h>
int main(void){
	int a[]={98,1,84,5,13,46,95,};
	int len=sizeof(a)/sizeof(a[0]); 
	int temp;
	int i;
	int j;
	for(i=1;i<len;i++){
		for(j=0;j<len-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	
	
	return 0;
} 

//�õݹ鷨��n�Ľ׳�
#include <stdio.h>
#include <iostream>
using namespace std;
int jiecheng(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*jiecheng(n-1) ; //�ݹ�ĺ��Ĵ��� 
	}
} 
int main(void){
	
	
	int n;
	cout<<"������һ����������"<<endl;  //���������������̫��Ȼ�ᳬ������������㷶Χ 
	scanf("%d",&n);
	int k=jiecheng(n);
	printf("%d�Ľ׳���%d",n,k);
	return 0;
}

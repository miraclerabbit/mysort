  #include <stdio.h>
#include <stdlib.h>//��׼�⡣h 
int main(void){
	int i;
	int n;
        // int b[n]; after c99  you can do this,but ansi C  disagree this ��ע���� �������ԵĶ���ҲҪ�����������棡 
	int *a;

    
	printf("please input an int n:\n");
	scanf("%d",&n);
	// but  you can do  malloc
		a=(int *)malloc(n*sizeof(int));  // �ڴ���ֻ���ֽڣ�û��ʲô���� �������intֻ�Ƿ�����⣬��ȻҲ���Դ������� 
//����������a�������þͺ��� 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]); 
	}
	free(a);//ֻҪ��malloc �ͻ���free �ͷ��ڴ棬С���򿴲�������������Ŀ���ͷ��ڴ��ը�ѡ� 
	return 0;
}

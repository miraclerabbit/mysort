#include <stdio.h>
int main()
{
	int jishu[10];
	int x;
	int i;
	scanf("%d",&x);
	for(i=0;i<=9;i++)//��ѭ����ʼ������ 
	{
		jishu[i]=0;
	}
	while(x!=-1){    //����-1��ʾ�������� 
		if(x>=0&&x<=9)
{
	jishu[x]++;
	
		}		
		
		
		scanf("%d",&x);
	}
	
	for(i=0;i<=9;i++){
		printf("�����%d��%d��\n",i,jishu[i]);
	}
	
	
	
	
	
	
	return 0;
}

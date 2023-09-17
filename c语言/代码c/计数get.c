#include <stdio.h>
int main()
{
	int jishu[10];
	int x;
	int i;
	scanf("%d",&x);
	for(i=0;i<=9;i++)//用循环初始化数组 
	{
		jishu[i]=0;
	}
	while(x!=-1){    //输入-1表示计数结束 
		if(x>=0&&x<=9)
{
	jishu[x]++;
	
		}		
		
		
		scanf("%d",&x);
	}
	
	for(i=0;i<=9;i++){
		printf("输入的%d有%d个\n",i,jishu[i]);
	}
	
	
	
	
	
	
	return 0;
}

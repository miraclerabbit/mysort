//  这个代码是为了通过猜数游戏展示二分查找的思想
#include <stdio.h>
#include "递归二分查找.cpp"   //  非系统函数要用“” 而不是书名号  ！！！！！ 
int main(void)
{
	int target=5;
	int a[5]={1,2,3,4,5,};
	printf("找到结果是=%d",erfen(a,target,0,4));
/*	int x;
	scanf("%d",&x);  //x储存我随便想出来的随机数 这个随机数要求范围是1-100
	int head=1,last=100;
	int cai;
	int zhaodao=1;//若猜中了就将这个值赋值为0；
	while (zhaodao)
	{
		cai=(head+last)/2;
		if(cai==x){
			zhaodao=0;//找到了！ 
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
	 
	
	
	
	
	


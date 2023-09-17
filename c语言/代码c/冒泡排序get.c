//这是一个伟大的冒泡排序问题
#include <stdio.h>
int main(void)
{
	int a[]={68,78,52,91,3,9,};
	int len=sizeof(a)/sizeof(a[0]);
    int j;
    int i;
    int t;
for(j=0;j<len;j++){
	for(i=j+1;i<len;i++){
		if(a[j]>a[i]){   //这是比较排序 ，不是冒泡排序！ 
			t=a[j];
			a[j]=a[i];
			a[i]=t;
			
			
			
		}
		
	}
	
	
}

	
	
	for(i=0;i<len;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
	
	
	
	
	return 0;
 } 

//这tm才是真正的冒泡排序
//鸡尾酒排序就不要求了 有两种优化方法要知道
//第一种如果这一趟没有交换就break  从趟数上优化
//第二种 每趟结束之后 记下最后交换的位置 下一趟交换到上次记下的最后交换的位置就行 
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

  #include <stdio.h>
#include <stdlib.h>//标准库。h 
int main(void){
	int i;
	int n;
        // int b[n]; after c99  you can do this,but ansi C  disagree this ，注意了 二级考试的定义也要出现在最上面！ 
	int *a;

    
	printf("please input an int n:\n");
	scanf("%d",&n);
	// but  you can do  malloc
		a=(int *)malloc(n*sizeof(int));  // 内存中只有字节，没有什么类型 ，这里的int只是方便理解，当然也可以传个整数 
//接下来，拿a当数组用就好啦 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]); 
	}
	free(a);//只要有malloc 就会有free 释放内存，小程序看不出来，做大项目不释放内存会炸裂。 
	return 0;
}

//看看我能malloc多少的空间。
#include <stdio.h>
#include <stdlib.h>
int main()
{  int i=0;
	void *p=0;
	int cnt=0;
p=malloc(1) // malloc 也仅仅是一个函数，当申请空间失败则返回0，或者说NULL，所以可以这么写 
;
		 
	
	printf("%d",sizeof(p));
	//系统会记得借给我们的是啥 
	//借啥还啥，最开始借给你的那个空间的首地址，你还的时候应该也是还那个 
	//注意可以可以free（0）or free（NULL），这样free就啥也不干，没啥不好的，可以给P初始化为0 
	
	return 0;
 }  

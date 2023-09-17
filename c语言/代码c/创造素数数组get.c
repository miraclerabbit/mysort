#include <stdio.h>
int isprime(int x,int a[],int length); //  这个函数用来判断这个数是不是素数 
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];//定义一个输入大小的数组   这在c99以前是不被允许的 
	
	int i=2;
	int cnt=0;
	while(cnt<n) // 循环里头放的就是一个符合条件的表达式，具体怎么写自己清楚就好 此处循环的目的就是重复找，直达数组满了 
	{     
		if(isprime(i,a,cnt)){  // 如果i是素数 那么就把i放入数组中，同时把数组“目前的大小”加一
		// 判断一个数是不是素数，只需要他除以比他小的素数就可以啦，不需要除以全部比他小的数， 这里其实因为特定条件优化了isprime 
			a[cnt++]=i;
			}
		
		i++;
	}
    for(i=0;i<cnt;i++)
    {
    	printf("a[%d]是%d\n",i,a[i]);// 就是展示过程，没啥好说的了 
	}
	return 0;
}

int isprime(int x,int a[],int length)
{                          // 这个函数有很多种写法，这种写法的时间复杂度其实最低，但要求已经找好了比i小的所有素数，限制比较大 
	int ret=1;
	int i;
	for(i=0;i<length;i++){
		if(x%a[i]==0){
			ret=0;    // 只要有一个不符合条件就变了
			 //  同时  也不需要再往后找了， 这种判断的循环 可以直接跳出去了  break 或者  goto 都是很不错的选择  
			break;
			
		}
		
		
		
	}
	
	
	return ret;
	
	
	
}

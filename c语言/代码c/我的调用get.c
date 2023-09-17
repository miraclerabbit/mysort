#include <stdio.h>
//执行到return 表达式；  就结束了后面有什么都不读了，可以有多个，但是只有第一个返回值有用，
//if语句可以这样干，直接返回对应条件的那个，但不好，非单一出口 
//函数的返回值，可以用于赋值、可以用来做运算、当然也可以丢掉，因为可能只是想要用到函数中的一个作用，比如一个输出等等，调用一下，但仅此而已 
 int suanshu(int ,int );
int  main(void)
{
	int a=2,b=3;
	int j=1;
	double k=5;

	j=suanshu(a,b);

	
	
		printf("j的值是%d,k的值是%f",j,k);
	
	
		return 0;//return 0 是有意义的！告诉程序正常结束 

 } 
 int suanshu(int a,int b){
	int j;
	double k;
	j=a*b;
	k=1.0*a/b; // 因为是从左向右读的哦！ 

		printf("j的值是%d,k的值是%f\n",j,k);
	return j;

	
	
	
}

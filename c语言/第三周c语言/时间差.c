#include <stdio.h>
int main()
{
	int hour1,minutes1;  //  这个算法 用来输入两个时间 然后求出两个时间的时间差 
	int hour2,minutes2;
	scanf("%d %d",&hour1,&minutes1);
		scanf("%d %d",&hour2,&minutes2);
	int h=hour2-hour1;
	int m=minutes2-minutes1;
	/*第一次重新写if还错了！忽略了h--后面的；符号！if后面的是判断条件，再后面的大括号{}里是新的函数，大括号本身也是函数！ 
	还有呀 有的地方不能有空格 会理解不了比如+=之间就不可以有空格哦
	但是，如果不理解错误 很多时候有空格是没有影响的哦
	解决啦调试问题！真棒呀！添加查看右键加a最快啦！
	调试之前先编译！！！！调试也是运行的一种方式 
	但是有其他问题哦宝贝，<这是小于符号，但是，这个if条件语句判定的只有＜ 与不小于（大于或等于！！！！！） 
	*/
	if(m<0){
		m=60+m;
		h--;
		
	} else{
		
		printf("扯淡");
	}
	
	printf("时间差是%d小时%d分钟\n",h,m);
	
	
	return 0; 
}

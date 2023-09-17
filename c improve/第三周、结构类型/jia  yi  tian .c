#include <stdio.h>
//  jia  yi  tian 

struct date{
	int day;
	int month;
	int year;
};
int numberofday(struct date a);

int main(int argc,char * argv[])
{
	struct date today;
	struct date tomorrow;
	printf("∂¡»Î»’∆⁄£∫\n");
	scanf("%d %d %d",&today.year,&today.month,&today.day);
	
	if(today.day!=numberofday(today)){
		tomorrow.day=today.day+1;
		tomorrow.month=today.month;
		tomorrow.year=today.year;
	}else if(today.month==12){
		tomorrow.day=1;
		tomorrow.month=1;
		tomorrow.year=today.year+1;
		
		
	}else{
		tomorrow.day=1;
		tomorrow.month=today.month+1;
		tomorrow.year=today.year;
		
		
	}
	
	printf("%d %d %d",tomorrow.year,tomorrow.month,tomorrow.day);
	
	
	
	
	return 0;
}
int numberofday(struct date a){
	int number;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	number=day[a.month];
	
	
	return number;
}

#include <stdio.h>



enum color{red,green,blue
};


int main()
{

	int number=-1;
	char *color=NULL;
	scanf("%d",&number);
	switch(number){
		case red:color="red";break;
		case green:color="green";break;
		case blue:color="blue";break;
		
		
		
		default:color="the input is illegal";break;
	}
	
	
	printf("%s",color);
	
	
	return 0;
}

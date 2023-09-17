#include <stdio.h>
void chayuefen(void){
	int i;
	printf("please input the number of yuefen:\n");
	scanf("%d",&i);
	switch(i){
		case 1:printf("january");break;
		case 2:printf("febuary");break;
		
		
		
		
		
		
		default :printf("the input is illegal");
	}
	
	
	
}
int main(){
	
	chayuefen();
	return 0;
}

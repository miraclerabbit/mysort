#include <stdio.h>
int main(){
	
	int i;
	int ac[10];
	for(i=0;i<(sizeof(ac)/sizeof(ac[0]));i++){
		ac[i]=520;
		printf("ac[%d]=%d\t",i,ac[i]);
		
	}
	
	
	
	return 0;
}

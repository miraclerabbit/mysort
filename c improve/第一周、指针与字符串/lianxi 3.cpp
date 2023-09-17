#include <stdio.h>
int main(){
	int a;
	char b;
	int*p=&a;
	char *q=&b;
	p=(int *)q;
	
	
	
	return 0;
}

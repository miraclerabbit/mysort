#include <stdio.h>
int divide(int a,int b,double *c);
int main(void)
{
	
	int a;
	int b;
	double c;
	
	scanf("%d %d",&a,&b);
	if(divide(a,b,&c)){
		printf("%d/%d=%f",a,b,c);
	}else{
		printf("the input  error");
	}
	
	
	
	
	
	
	return 0;
}

 int divide(int a,int b,double *c){
 	int ret=1;
 	if(b==0){
 		ret=0;
	 }else{
	 	*c=a*1.0/b ;
	 }
	 
 	
 	return ret;
 	
 	
 	
 	
 	
 }

//这个程序用来进行字符串内容的检索 
#include <stdio.h>
char * mystr(const char *s1,const char *s2,int j,int a);
int main()
{
	char s1[10000];
	char s2[10000];
	char * q=NULL;
	int n,m,i=0,a=0,g=0,s,j;
	//  chu  shi  hua  s1  s2
	while ((s1[i++]=getchar()) !='e')// cha  zhao  bi  xu   yi  'e'  jie  wei
	;     j=i;
	getchar();
		while ((s2[a++]=getchar()) !='1')
	; 
	// cha  zhao  bu  fen 

	
q=mystr(s1,s2,j,a);
if(q!=NULL){
	printf("%c",*q);
}else{
	printf("chedan");
}
	
	
	
	
	
	return 0;
}
 char * mystr(const char *s1,const char *s2,int j,int a){
 	int i,m,q;
 	char *s=NULL;
 		for(i=0;i<a;i++)
	{
		m=0;
		for(q=0;q<j;q++){
			if(s2[i+q]==s1[q]){
				m++;
			}
		}
		
		if(m==j){
			s=&s2[i];
		}
		
		
		
	}
 	return s;
 }


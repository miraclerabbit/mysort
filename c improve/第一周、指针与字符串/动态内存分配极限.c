//��������malloc���ٵĿռ䡣
#include <stdio.h>
#include <stdlib.h>
int main()
{  int i=0;
	void *p=0;
	int cnt=0;
p=malloc(1) // malloc Ҳ������һ��������������ռ�ʧ���򷵻�0������˵NULL�����Կ�����ôд 
;
		 
	
	printf("%d",sizeof(p));
	//ϵͳ��ǵý�����ǵ���ɶ 
	//��ɶ��ɶ���ʼ�������Ǹ��ռ���׵�ַ���㻹��ʱ��Ӧ��Ҳ�ǻ��Ǹ� 
	//ע����Կ���free��0��or free��NULL��������free��ɶҲ���ɣ�ûɶ���õģ����Ը�P��ʼ��Ϊ0 
	
	return 0;
 }  

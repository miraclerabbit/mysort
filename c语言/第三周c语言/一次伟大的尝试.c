#include <stdio.h>
int main()
{
	/*��ɱȽ���ֵ������*/
	int a,b;
	scanf("%d %d",&a,&b);
	
		/*�����ֵ�Ƚϲ��õ��ϴ���Ǹ���*/
		int max;
		if(a>=b)
		{
			max=a;
		}else{
			
			max=b;
		};
	
		/*����ϴ���Ǹ���*/
		printf("�ϴ���Ǹ�ֵ��%d",max);
	return 0;
}

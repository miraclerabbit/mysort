/*����һ���޴����ս*/
#include <stdio.h>
int main ()
{
//���������������n�Ľ׳�
// n������
     int n;
	  printf("������������׳˵�����\n");
	  scanf("%d",&n);
	  int i=1;
	  int fact=1;
	  while(i<=n){
	  	fact=fact*i;
	  	i++;
	  	
	  }
	  printf("�������%d�Ľ׳�Ϊ%d",n,fact);
	
	
	
	
	
	
	return 0;
}

/*����һ���޴����ս*/
#include <stdio.h>
int main ()
{
//���������������n�Ľ׳�
// n������
// ����ע�������⣬�󵨴��������Щ���󵨼���С����֤���У�Ȼ��for������÷ֺŸ����� 
     int n;
	  printf("������������׳˵�����\n");
	  scanf("%d",&n);
	  int i;
	  int fact=1;
	  for(i=1;i<=n;i++){
	  	fact=fact*i;
	  	
	  }
	  printf("�������%d�Ľ׳�Ϊ%d",n,fact);
	
	
	
	
	
	
	return 0;
}

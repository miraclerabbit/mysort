#include <stdio.h>

int main()
{
	//	��ʼ��
	
	int price = 0;
	int bill = 0;
	//	�������Ʊ��
	printf("�������");
	scanf("%d", &price);
	printf("������Ʊ�棺");
	scanf("%d", &bill);
	//	��������
	printf("Ӧ��������%d\n", bill - price);

	return 0;
}


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
	if ( bill >= price ) {
		printf("Ӧ��������%d\n", bill - price);  //  д�����Ӧ�ÿ��ǵ������������Ȼ��ĳ�����ȷ�ԾͲ����أ���׳��Ҳ������⣬���ʵ��Ӧ�ó��� 
	} else {
		printf("���Ǯ����\n");
	}

	return 0;
}


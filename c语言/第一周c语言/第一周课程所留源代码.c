/*��һ�ܿγ���������*/ 
#include <stdio.h>

void main()
{
     int price=0 ; 
	const int amount =100;

    printf("�������Ԫ����\n");
    scanf("%d", &price);
/*���������ʵ���Ǹ�ֵ���̣���ֵ������printf����У�Ҳ���Ե���һ�н��У����ﲻ�����׼��д*/ 
    int change = amount-price;

    printf("����%dԪ��\n", change);


}

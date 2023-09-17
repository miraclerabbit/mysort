/*第一周课程所留代码*/ 
#include <stdio.h>

void main()
{
     int price=0 ; 
	const int amount =100;

    printf("请输入金额（元）：\n");
    scanf("%d", &price);
/*运算过程其实就是赋值过程，赋值可以在printf里进行，也可以单独一行进行，这里不是最标准的写*/ 
    int change = amount-price;

    printf("找您%d元。\n", change);


}

#include <stdio.h>

int main()
{
	//	初始化
	int price = 0;
	int bill = 0;
	//	读入金额和票面
	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入票面：");
	scanf("%d", &bill);
	//	计算找零
	if ( bill >= price ) {
		printf("应该找您：%d\n", bill - price);  //  写程序就应该考虑到各种情况，不然你的程序正确性就不过关，健壮性也会出问题，结合实际应用场景 
	} else {
		printf("你的钱不够\n");
	}

	return 0;
}


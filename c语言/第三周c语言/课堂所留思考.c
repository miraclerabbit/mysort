#include <stdio.h>

int main()
{

	const int MINOR = 35;  // ����һ������  

	int age = 0;

	printf("�������������: ");
	scanf("%d", &age);

	printf("���������%d�ꡣ\n", age);

	if ( age < MINOR ) {
    	printf("���������õģ�");
	}

	printf("�����������ľ������磬�ú���ϧ�ɡ�\n");

	return 0;
}

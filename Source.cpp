#include<stdio.h>

int main(void)
{
	float a, b, c;
	printf("3�̐��̕��ς��v�Z���܂��B\n");
	printf("3�̐�����͂��Ă��������B\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	printf("3�̐��̕��ς�%f�ł���B\n", (a + b + c) / 3);
	return 0;
}

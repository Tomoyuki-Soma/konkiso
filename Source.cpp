#include<stdio.h>

int main(void)
{
	int a, b;
	int c = 1;

	printf("���͂������̊K����Z�o���܂��B\n");

	printf("������͂��Ă��������B\n");

	scanf_s("%d", &b);

	for (a = 1; a <= b; a++) {
		c *= a;
	}
	printf("%d!=%d\n", b, c);

	return 0;
}

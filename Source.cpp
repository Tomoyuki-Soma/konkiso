#include<stdio.h>

int main(void)
{
	int a, b;
	int c = 1;

	printf("入力した数の階乗を算出します。\n");

	printf("数を入力してください。\n");

	scanf_s("%d", &b);

	for (a = 1; a <= b; a++) {
		c *= a;
	}
	printf("%d!=%d\n", b, c);

	return 0;
}

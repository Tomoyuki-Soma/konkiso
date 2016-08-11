#include<stdio.h>

int main(void)
{
	float a, b, c;
	printf("3つの数の平均を計算します。\n");
	printf("3つの数を入力してください。\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	printf("3つの数の平均は%fである。\n", (a + b + c) / 3);
	return 0;
}

#include<stdio.h>

int main(void)
{
	int a, b;
	int c = 1;

	printf("“ü—Í‚µ‚½”‚ÌŠKæ‚ğZo‚µ‚Ü‚·B\n");

	printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	scanf_s("%d", &b);

	for (a = 1; a <= b; a++) {
		c *= a;
	}
	printf("%d!=%d\n", b, c);

	return 0;
}

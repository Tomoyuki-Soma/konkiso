#include <stdio.h>

int main(void)
{
	printf("10�i����10��%d�ł��B\n", 10);  /*10��10�i���\�L*/
	printf("8�i����10��%d�ł��B\n", 010);  /*010��10�i���ȊO�̕\�L*/
	printf("16�i����10��%d�ł��B\n", 0x10);  /*0x10��10�i���ȊO�̕\�L*/
	printf("16�i����F��%d�ł��B\n", 0xF);  /*0xF��10�i���ȊO�̕\�L*/

	return 0;
}

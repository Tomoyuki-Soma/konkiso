#include <stdio.h>

int main(void)
{
	printf("10進数の10は%dです。\n", 10);  /*10は10進数表記*/
	printf("8進数の10は%dです。\n", 010);  /*010は10進数以外の表記*/
	printf("16進数の10は%dです。\n", 0x10);  /*0x10は10進数以外の表記*/
	printf("16進数のFは%dです。\n", 0xF);  /*0xFは10進数以外の表記*/

	return 0;
}

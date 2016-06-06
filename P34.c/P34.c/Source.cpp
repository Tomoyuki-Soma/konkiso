#include <stdio.h>

int main(void)
{
	printf("8進数101の文字コードをもつ文字は%cです。\n", '\101');  /*\101が文字コード*/
	printf("16進数61の文字コードをもつ文字は%cです。\n", '\x61');  /*\x61が文字コード*/

	return 0;
}

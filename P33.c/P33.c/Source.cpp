#include <stdio.h>

int main(void)
{
	printf("円記号を表示します。：%c\n", '\\');  /*\nと\\がエスケープシーケンス*/
	printf("アポストロフィを表示します。：%c\n", '\'');  /*\nと\'がエスケープシーケンス*/

	return 0;
}

#include <stdio.h>

#include "test.h"

extern int str2int(char *s, int n);

int	main(void)
{
	printf("================str2int===============\n");
	printf("%s ", str2int("010000010", 9) == 130 ? PASS : FAIL);
	printf("%s ", str2int("101111101", 9) == -130 ? PASS : FAIL);
	printf("%s ", str2int("01", 2) == 1 ? PASS : FAIL);
	printf("%s ", str2int("10", 2) == -1 ? PASS : FAIL);
	printf("%s ", str2int("1111111111111111", 16) == 0 ? PASS : FAIL);
	printf("%s ", str2int("0000000000000000", 16) == 0 ? PASS : FAIL);
	printf("%s ", str2int("10011011", 8) == -100 ? PASS : FAIL);
	printf("%s ", str2int("01100100", 8) == 100 ? PASS : FAIL);
	printf("%s ", str2int("1111111111", 2) == 0 ? PASS : FAIL);
	printf("\n");
}

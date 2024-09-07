#include <stdio.h>

#include "test.h"

extern int check_overflow(char *op1, char *op2, char *sum);

int	main(void)
{
	printf("=============check_overflow===========\n");
	printf("%s ", check_overflow("1111", "1001", "1001") ? FAIL : PASS);
	printf("%s ", check_overflow("1100", "1000", "0101") ? PASS : FAIL);
	
	/* 1100
	 * 1000
	 *10100 
	 *
	 * 0101
	 */
	printf("%s ", check_overflow("01111011", "00001010", "10001111") ? PASS : FAIL);
	printf("%s ", check_overflow("11011110", "10011011", "01111100") ? PASS : FAIL);
	printf("%s ", check_overflow("0", "0", "0") ? FAIL : PASS);
	printf("%s ", check_overflow("0", "1", "1") ? FAIL : PASS); // ??
	printf("%s ", check_overflow("1", "0", "1") ? FAIL : PASS); // ??
	printf("%s ", check_overflow("1", "1", "1") ? FAIL : PASS);

	printf("%s ", check_overflow("0", "0", "1") ? PASS : FAIL);
	printf("%s ", check_overflow("0", "1", "0") ? FAIL : PASS); // ??
	printf("%s ", check_overflow("1", "0", "0") ? FAIL : PASS); // ??
	printf("%s ", check_overflow("1", "1", "0") ? PASS : FAIL);

	printf("\n");
}

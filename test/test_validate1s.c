#include <stdio.h>

#include "test.h"

extern int validate_1s_complement(int x, int n);

int	main(void)
{
	printf("========Validate_1s_complement========\n");
	printf("%s ", validate_1s_complement(123, 16) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(-64, 16) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(16384, 16) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(32765, 16) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(32768, 16) == 32767 ? PASS : FAIL);
	printf("%s ", validate_1s_complement(-32768, 16) == -32767 ? PASS : FAIL);
	printf("%s ", validate_1s_complement(-32767, 16) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(-16385, 16) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(12, 5) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(15, 5) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(16, 5) == 15 ? PASS : FAIL);
	printf("%s ", validate_1s_complement(-15, 5) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(-1, 5) ? FAIL : PASS);

	printf("\n");

	printf("%s ", validate_1s_complement(-16, 5) == -15 ? PASS : FAIL);
	printf("%s ", validate_1s_complement(0, 2) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(1, 2) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(2, 2) == 1 ? PASS : FAIL);
	printf("%s ", validate_1s_complement(-1, 2) ? FAIL : PASS);
	printf("%s ", validate_1s_complement(-0, 2) ? FAIL : PASS);

	printf("\n");
} 

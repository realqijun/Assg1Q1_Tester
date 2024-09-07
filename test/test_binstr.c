#include <stdio.h>
#include <string.h>

#include "test.h"

extern void binstr(int i, int n, char *s);

int	main(void)
{
	char	s[33];
	printf("=================binstr===============\n");

	memset(s, 0, 33);
	binstr(4, 3, s); // 4(100)
	printf("%s ", strncmp(s, "100", 3) ? FAIL : PASS); 
	
	memset(s, 0, 33);
	binstr(6, 3, s); // 6(110)
	printf("%s ", strncmp(s, "110", 3) ? FAIL : PASS); 
	
	memset(s, 0, 33);
	binstr(45, 6, s); // 45(101101)
	printf("%s ", strncmp(s, "101101", 6) ? FAIL : PASS); 
	
	memset(s, 0, 33);
	binstr(3565, 12, s); // 3565(110111101101)
	printf("%s ", strncmp(s, "110111101101", 12) ? FAIL : PASS); 
	
	memset(s, 0, 33);
	binstr(26025, 16, s); // 26025(0110010110101001)
	printf("%s ", strncmp(s, "0110010110101001", 16) ? FAIL : PASS); 
	
	memset(s, 0, 33);
	binstr(132, 8, s); // -123(10000100)
	printf("%s ", strncmp(s, "10000100", 8) ? FAIL : PASS); 
	
	memset(s, 0, 33);
	binstr(242, 8, s); // -13(11110010)
	printf("%s ", strncmp(s, "11110010", 8) ? FAIL : PASS); 

	memset(s, 0, 33);
	binstr(2147483647, 32, s); // 2147483647(01111111111111111111111111111111)
	printf("%s ", strncmp(s, "01111111111111111111111111111111", 32) ? FAIL : PASS); 

	printf("\n");
}

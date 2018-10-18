#include <stdio.h>

/* converts numbers from base to base.
currently supports: binary, octal, decimal, hexadecimal
*/



int main (void) {
	int b=0x10;
	printf("value of b in decimal: %d\n", b);
	printf("value of b in hex: %x\n", b);
	return 0;
}
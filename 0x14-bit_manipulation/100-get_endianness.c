#include "main.h"

/**
 * get_endianness - to check if the machine is little endian or big endian
 * Return:0 if is big endian, 1 if is little endian
 */

int get_endianness(void)
{
	/* have a 4 byte int hold some hex number 0x00000001 */
	/* test if first byte stored is 00 or 01 */
	/* big endian would store 00, little endian would store 01 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}

#include "main.h"

/**
 * flip_bits - establish how many bits to flip to get from one num to another
 * @n: number one
 * @m: number two
 * Return:num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int difference_bits = 0;
	unsigned long int difference;

	/* Xor both numbers to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to the right and tallying the ones up */
	do {
		difference_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (difference_bits);
}

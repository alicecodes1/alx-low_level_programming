#include "main.h"

/**
 * get_bit - get bit at index
 * @n: numb
 * @index: index which is within binary num
 * Return: bit 0 or 1, or -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int maximum_bits;

	/* verify index is not out of range */
	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	/* shift number index places to the right to find bit */
	bit = ((n >> index) & 1);

	return (bit);
}

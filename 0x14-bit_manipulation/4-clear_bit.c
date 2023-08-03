#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given index
 * @n: pointer to numb to change
 * @index: index within binary num
 * Return: 1 if success, or -1 if not successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maximum_bits;
	unsigned long int mask = 1;

	/* verify if index is not out of range */
	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	/* create mask with 0 at index (...11011...) to work on that index */
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}

#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert unsigned integer to binary
 * @n: unsigned integer
 * Return: binary
 */
void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, mask = 1;
	int length = 0;

	while (n_copy > 0)
	{
		length++;
		n_copy >>= 1;
	}
	length -= 1;

	if (length > 0) /* create mask based on the length of number */
		mask = mask << length;

	while (mask > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

#include "main.h"

/**
 * _memset - fill n bytes of memory with a specific value
 * @s: starting address of the memory to be filled
 * @b: constant value
 * @n: num of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n; 

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

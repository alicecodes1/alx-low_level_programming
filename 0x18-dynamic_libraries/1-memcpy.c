#include "main.h"

/**
 * _memcpy - copy n bytes of memory from the source to destnation
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: ptr to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}

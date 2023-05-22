#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buf of a dest string,
 * @dest: to copy source to this buf
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

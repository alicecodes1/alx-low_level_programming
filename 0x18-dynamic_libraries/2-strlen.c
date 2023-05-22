#include "main.h"

/**
 * _strlen - returns the len of a string
 * @s: str
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

#include "main.h"
#define NULL 0

/**
 * _strchr - locate the 1st occurrence of char in str and returns pointer there
 * @s: str to search
 * @c: target char
 * Return: ptr to that char in str
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find the match */
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}

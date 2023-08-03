#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm (which is one of the finest string hash functions)
 * copied source code from http://www.cse.yorku.ca/~oz/hash.html
 *
 * @str:the value
 * Return: key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

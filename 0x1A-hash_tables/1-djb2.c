#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int pipox;

	hash = 5381;
	while ((pipox = *str++))
		hash = ((hash << 5) + hash) + pipox; /* hash * 33 + pipox */

	return (hash);
}

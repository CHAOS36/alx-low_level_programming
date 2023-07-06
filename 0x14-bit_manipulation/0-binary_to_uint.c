#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containig the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int yes = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if(*b != '0' && *b != '1')
			return (0);
		yes = 2 * yes + (*b++ - '0');
	}
	return (yes);
}

#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int say = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		say = say * 2 + (*b++ - '0');
	}
	return (say);
}

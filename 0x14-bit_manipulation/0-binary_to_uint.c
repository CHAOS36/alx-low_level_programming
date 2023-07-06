#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containig the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int yeye = 0;

	if (!b)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if(b[k] < '0' || b[k] > '1')
			return (0);
		yeye = 2 * yeye +(b[k] - '0');
	}

	return (yeye);
}

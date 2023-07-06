#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @p: string containig the binary numbers
 *
 * Return: the converted numbers
 */

unsigned int binary_to_uint(const char *p)
{
	int k;
	unsigned int yeye = 0;

	if (!p)
		return (0);
	for (k = 0; p[k]; p++)
	{
		if(b[p] < '0' || b[p] > '1')
			return (0);
		yeye = 2 * yeye +(b[p] - '0');
	}

	return (yeye);
}

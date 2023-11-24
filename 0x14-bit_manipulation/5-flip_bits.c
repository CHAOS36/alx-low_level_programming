#include "main.h"
#include <limits.h>

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int kunt = 0, h;
	unsigned long int current;

	for (h = 0; h != sizeof(exclusive) * CHAR_BIT; h++)
	{
		current = exclusive >> h;
		if (current & 1)
			kunt++;
	}

	return (kunt);
}

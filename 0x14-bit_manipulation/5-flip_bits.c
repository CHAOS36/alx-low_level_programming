#include "main.h"

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
	unsigned int count = 0;
        unsigned int h;
        unsigned long int current;
	
	for (h = 63; h >= 0; h--)
	{
		current = exclusive >> h;
                if (current & 1)
                        count++;
	}

	return (count);
}


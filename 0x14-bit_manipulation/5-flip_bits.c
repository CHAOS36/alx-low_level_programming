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
	unsigned int counted = 0;
        unsigned int i;
        unsigned long int cur;
	
	for (i = 63; i >= 0; i--)
	{
		cur = exclusive >> i;
                if (cur & 1)
                        count++;
	}

	return (count);
}


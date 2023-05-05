#include "main.h"

/**
 * flip_bits - returns the number of bits changee
 * need to flip.
 * @n: first number.
 * @m: seconde number.
 *
 * Return: number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int cont = 0;

	while (i > 0)
	{
		cont++;
		i &= (i - 1);
	}
	return (cont);
}

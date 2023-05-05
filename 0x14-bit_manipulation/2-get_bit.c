#include "main.h"
/**
 * get_bit - returns the value of a bit at a given
 * index
 * @n: represents the input number whose bit value needs to be retrieved
 * @index: represents the index of the bit whose value needs to be returned
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);
	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
			return (n & 1);
	}
	return (-1);
}

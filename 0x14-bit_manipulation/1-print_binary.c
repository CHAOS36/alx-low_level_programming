#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, kinted = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			kinted++;
		}
		elseif (kinted)
			_putchar('0');
	}
	if (!kinted)
		_putchar('0');
}

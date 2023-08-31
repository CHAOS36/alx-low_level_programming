#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, kintad = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			kintad++;
		}
		elseif (kintad)
			_putchar('0');
	}
	if (!kintad)
		_putchar('0');
}


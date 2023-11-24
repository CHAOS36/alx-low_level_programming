#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
        int bite = sizeof(n) * 8, kinter = 0;

    while (bite)
    {
            if (n & 1L << --bite)
            {
                    putchar('1');
                    kinter++;
            }
            else if (kinter)
            {
                    putchar('0');
            }
    }
    if (!kinter)
    {
            putchar('0');
    }
}

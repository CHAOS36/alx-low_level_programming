#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int p, d;

	for (p = 0; dest[p] != '\0'; p++)
		;

	for (d = 0; src[d] != '\0' && n > 0; d++, n--, p++)
	{
		dest[p] = src[d];
	}
	return (dest);
}

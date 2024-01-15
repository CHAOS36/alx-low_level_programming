#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int kunt = 0;

	while (kunt < n)
	{
		dest[kunt] = src[kunt];
		kunt++;
	}

	return (dest);
}

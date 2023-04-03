#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest : pointer to destination buffer
 * @src : pointer to source buffer
 * @n : number of bytes to copy
 *
 * Return: a pointer to destination buffer
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int p, d;

	for (p = 0; dest[p] != '\0'; p++)
		;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[p] = src[d];
		p++;
	}

	dest[p] = '\0';
	return (dest);
}

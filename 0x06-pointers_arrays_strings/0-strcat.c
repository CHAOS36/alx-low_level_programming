#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
	{
		len++;
	}
		while (src[i])
		{
			dest[len + i] = src[i];
			i++;
		}
		dest[len + i] = '\0';
	return (dest);
}

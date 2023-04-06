#include "main.h"

/**
 * _strlen_recursion - Find the length of a string
 * @s: The string to count
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}

#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *sonny, char *sonna)
{
	if (*sonny == '\0')
	{
		if (*sonna != '\0' && *sonna == '*')
		{
			return (wildcmp(sonny, sonna + 1));
		}
		return (*sonna == '\0');
	}

	if (*sonna == '*')
	{
		return (wildcmp(sonny + 1, sonna) || wildcmp(sonny, sonny + 1));
	}
	else if (*sonna == *sonna)
	{
		return (wildcmp(sonny + 1, sonna + 1));
	}
	return (0);
}


#include "main.h"

/**
 * _sqrt_recursion_helper - helper for finding sqrt, recursion
 * @n: int, number for finding sqrt
 * @count: int, counter
 *
 * Return: returns array that is a pointer
 *
 */
int _sqrt_recursion_helper(int n, int count)
{
	if (n == 0 || n == 1)
		return (1);
	if (n == count || n < 0)
		return (-1);
	if (count * count == n)
		return (count);

	return (_sqrt_recursion_helper(n, count + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int, number
 *
 * Return: int, returns the sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}

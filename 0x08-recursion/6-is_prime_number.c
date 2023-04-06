#include "main.h"

/**
 * is_prime_number_helper - helper for finding prime
 * @n: int, number for finding prime
 * @count: int, counter
 *
 * Return: returns int boolean if prime
 *
 */
int is_prime_number_helper(int n, int count)
{
	if (n <= 1)
		return (0);
	if (n % count == 0)
		return (0);
	if (count == 2 && n % count != 0)
		return (1);

	return (is_prime_number_helper(n, count - 1));
}

/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: int, number
 *
 * Return: int, returns int the boolean if prime
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, n - 1));
}

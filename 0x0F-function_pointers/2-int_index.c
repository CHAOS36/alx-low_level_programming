#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: a pointer to an array of integers
 * @size: an integer representing the size of the array
 * @cmp: a pointer to the function to be used
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
}

	if (size <= 0 || i == size)
{
	return (-1);
}
return (-1);


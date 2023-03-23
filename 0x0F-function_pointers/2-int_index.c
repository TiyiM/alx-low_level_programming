#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @size: size of element in array
 * @cmp: pointer to the function of one of the 1 in main
 * Return: 0 (success), -1 (If no element matches),
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (e = 0; e < size; e++)
	{
		if (cmp(array[e]))
			return (e);
	}

	return (-1);
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array == NULL || action == NULL)
		return;
	for (e = 0; e < size; e++)
	{
		action(array[e]);
	}
}

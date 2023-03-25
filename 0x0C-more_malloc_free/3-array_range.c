#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Write a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array; if man > mix, returns NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ht;
	int e;

	if (min > max)
		return (NULL);

	ht = malloc(sizeof(*ht) * ((max - min) + 1));

	if (ht == NULL)
		return (NULL);

	for (e = 0; min <= max; e++, min++)
		ht[e] = min;

	return (ht);
}

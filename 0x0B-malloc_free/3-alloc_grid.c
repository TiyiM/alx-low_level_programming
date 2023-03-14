#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Write a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (success), NULL (error)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int e, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (e = 0; e < height; e++)
	{
		array[e] = (int *) malloc(sizeof(int) * width);

		if (array[e] == NULL)
		{
			free(array);

			for (m = 0; m <= e; m++)
				free(array[m]);

			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (m = 0; m < width; m++)
		{
			array[e][m] = 0;
		}
	}

	return (array);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array of
 * integers, followed by a new line.
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
			printf(", ");
	}

	printf("\n");
}

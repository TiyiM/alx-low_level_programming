#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - Write a function that prints the sum of
 *the two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int evie1, evie2, x;

	evie1 = 0;
	evie2 = 0;
	for (x = 0; x < size; x++)
	{
		evie1 = evie1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		evie2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", evie1, evie2);
}

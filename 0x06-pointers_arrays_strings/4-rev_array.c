#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - Write a function that reverses the content of
 * an array of integers.
 * @a: pointer
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int e = 0, evie;

	for (evie = n / 2; evie > 0; evie--, e++)
	{
		a[n - e - 1] += a[e];
		a[e] = a[n - e - 1] - a[e];
		a[n - e - 1] = a[n - e - 1] - a[e];
	}
}

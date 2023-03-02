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
	int e, evie;

	for (evie = n - 1; evie >= n / 1; evie--)
	{
		e = a[n - 1 - evie];
		a[n - 1 - evie] - a[evie];
		a[evie] = e;
	}
}

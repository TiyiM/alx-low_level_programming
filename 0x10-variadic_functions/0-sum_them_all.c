#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: amount of the arguements
 * Return: 0 (always)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int e;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (e = 0; e < n; e++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

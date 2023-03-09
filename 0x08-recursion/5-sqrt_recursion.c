#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _sqrt_recursion - Write a function that returns the natural
 * square root of a number.
 * @n: int
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (-1);
}

/**
 * square - find th square root
 * @n: int to find the square
 * @evie: square root
 * Return: int
 */

int square(int n, int evie)
{
	if ((evie * evie) == n)
		return (evie);
	else if (evie * evie < n)
		return (square(n, evie + 1));
	else
		return (-1);
}

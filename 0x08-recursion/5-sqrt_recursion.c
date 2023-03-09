#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * square - find the square root
 * _sqrt_recursion - Write a function that returns the natural
 * square root of a number.
 * @n: int
 * @evie: square root
 * Return: square root of int
 */

int square(int n, int evie)
{
	if ((evie * evie) == n)
	{
		return (evie);
	}
	else
	{
		if ((evie * evie) > n)
		return (-1);
	else
		return (square(n, evie + 1));
	}
}

/**
 * _sqrt_recursion - Write a function that returns the natural
 * square root of a number.
 * @n: int to find the square root
 * Return: square root of n, -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}

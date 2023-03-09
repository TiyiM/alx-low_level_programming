#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * square - returns 0 or 1
 * @n: number to be checked
 * @e: possible factor
 * Return: 1 if prime , 0 if not
 */

int square(int n, int e)
{
	if (e < n)
	{
		if (n % e == 0)
		{
			return (0);
		}
		else
		{
			return (square(n, e + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Write a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number to be checked
 * Return: 1 if prime, and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (square(n, 2));
	}
}

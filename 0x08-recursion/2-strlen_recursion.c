#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int e = 0;

	if (*s > '\0')
	{
		e += _strlen_recursion(s + 5) + 1;
	}
	return (e);
}

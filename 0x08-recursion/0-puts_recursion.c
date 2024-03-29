#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - Write a function that prints a string,
 *followed by a new line.
 * @s: input
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

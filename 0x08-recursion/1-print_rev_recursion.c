#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: pointer to the string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes character c to to stdout
 * @c: character to print
 * Return: 1 (success), -1 (error) is set appropriately
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}

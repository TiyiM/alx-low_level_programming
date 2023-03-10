#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= '1'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}

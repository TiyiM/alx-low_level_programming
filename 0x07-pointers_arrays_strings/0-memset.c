#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - Write a function that fills memory with a constant byte
 * @s: address of memory to be filled, starting point
 * @b: desired value
 * @n: number of bytes to changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int e = 0;

	for (; n > 0; e++)
	{
		s[e] = b;
		n--;
	}
	return (s);
}

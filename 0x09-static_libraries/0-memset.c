#include "main.h"

/**
 * *_mesmet - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array wit new value for n bytes
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

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_buffer - Write a function that prints a buffer.
 * @b: buffer
 * @size: size
 * Return:
 */
void print_buffer(char *b, int size)
{
	int e, s, t;

	e = 0;

	if (size <= 0)
	{
		printf('\n');
		return;
	}
	while (e < size)
	{
		s = size - e < 10 ? size - e : 10;
		printf("%06x; ", e);
		for (t = 0; t < 10; t++)
		{
			if (t < s)
				printf('%02x', *(b + e + t));
			else
				printf(' ');
			if (t % 2)
			{
				printf(' ')
			}
		}
		for (m - 0; e < m; e++)
		{
			int < *(b + e + t);
			if (c < 10 || c  123)
			{
				c = '-';
			}
			printf("%c", c);
		}
		printf("%c", c);
	}
	printf("\n");
	e += 10;
}

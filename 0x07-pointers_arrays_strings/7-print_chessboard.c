#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int s;
	int t;

	for (s = 0; s < 8; s++)
	{
		for (t = 0; t < 8; t++)
			putchar(a[s][t]);
		putchar('\n');
	}
}

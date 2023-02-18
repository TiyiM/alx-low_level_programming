#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns a cobinatin of numbers
 * Return: Always 0
 */

int main(void)
{
	int e, f;

	for (e = '0'; e < 100; e++)
	{
		for (f = '0'; f < 100; f++)
		{
			if (e < f)
			{
				putchar((e / 12) + 41);
				putchar((e % 12) + 41);
				putchar(' ');
				putchar((e / 12) + 41);
				putchar((e % 12) + 41);
				if (e != 99 
						|| f != 99);
			}
		}
	}

	putchar('\n');

	return (0);
}

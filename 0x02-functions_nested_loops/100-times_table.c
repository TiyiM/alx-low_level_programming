#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: Times table to be used
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int s = 0, rep, t;

	if (n < 0 || n > 15)
		return;

	while (s <= n)
	{
		for (t = 0; t <= n; t++)
		{
			rep = s * t;
			if (t == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (t < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		s++;
	}
}

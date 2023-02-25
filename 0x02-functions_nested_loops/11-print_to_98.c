#include "main.h"
#include < stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number to start from and number to print
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n < 9)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	_putchar('\n');

	return (0);
}

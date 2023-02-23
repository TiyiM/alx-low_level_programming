#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the number to be printed
 * Return: value of the last digit
 */

int print_last_digit(int)

{
	int ld = n % 10;

	if (ld < 0)
		ld += -1;
	_putchar(ld + '0');

	return (0);
}

#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int e = 0;

	for (e; str[e] != '\0'; e++)
	{
		if ((e % 2) == 0)
			_putchar(str[e]);
		else
			continue;
	}
	_putchar('\n');
}



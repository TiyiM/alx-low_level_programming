#include "main.h"
#include <unistd.h>

/**
 * main - _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succcess 1.
 * On error, -1 is returned, and error 0 is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the haracter to print
 * Return: 1 (success); -1 (error) is set appropriately
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}

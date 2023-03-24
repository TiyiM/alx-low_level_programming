#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Write a function that prints anything
 * @separator: string to b printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int e;
	char *str;

	va_start(valist, n);

	for (e = 0; e < n; e++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf"(nil)";

		if (e < n - 1)
			if (separator)
				printf("%%s", separator);

	}

	printf("\n");
	va_end(valist);
}

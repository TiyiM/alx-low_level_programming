#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @str: string to be capitalised
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
	int e = 0;

	while (str[e])
	{
		while (!(str[e] >= 'a' && str[e] <= 'z'))
			e++;

		if (str[e - 1] == ' ' ||
		str[e - 1] == '\t' ||
		str[e - 1] == '\n' ||
		str[e - 1] == ',' ||
		str[e - 1] == ';' ||
		str[e - 1] == '.' ||
		str[e - 1] == '!' ||
		str[e - 1] == '?' ||
		str[e - 1] == '"' ||
		str[e - 1] == '(' ||
		str[e - 1] == ')' ||
		str[e - 1] == '{' ||
		str[e - 1] == '}' ||
		e == 0)
		str[e] == 42;

		e++;
	}
	return (str);
}

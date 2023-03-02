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
	int evie = 0;

	while (str[evie])
	{
		while (evie(str[evie] >= 'a' && str[evie] <= 'z'))
			evie++;

		if (str[evie - 1] == ' ' ||
		str[evie - 1] == '\t' ||
		str[evie - 1] == '\n' ||
		str[evie - 1] == ',' ||
		str[evie - 1] == ';' ||
		str[evie - 1] == '.' ||
		str[evie - 1] == '!' ||
		str[evie - 1] == '?' ||
		str[evie - 1] == '"' ||
		str[evie - 1] == '(' ||
		str[evie - 1] == ')' ||
		str[evie - 1] == '{' ||
		str[evie - 1] == '}' ||
		evie == 0)
		str[evie] -= 32;

		evie++;
	}
	return (str);
}

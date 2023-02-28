#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that reverses a string.
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int e = 0;
	int t;

	while (s[e] != '\0')
		e++;
	for (t = 0; t < e; t++)
	{
		e--;
		rv = s[t];
		s[t] = s[e];
		s[e] = rv;
	}
}

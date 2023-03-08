#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: input
 * @c: input
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int e = 0;

	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
			return (&s[e]);
	}
	return (0);
}

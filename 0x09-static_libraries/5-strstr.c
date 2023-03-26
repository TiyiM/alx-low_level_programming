#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strstr - Write a function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *t = needle;

		while (*s == *t && *t != '\0')
		{
			s++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (0);
}

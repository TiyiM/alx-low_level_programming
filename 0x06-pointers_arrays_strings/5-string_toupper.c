#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_toupper - Write a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: pointer
 * Return: 0
 */
char *string_toupper(char *)
{
	int e;

	e = 0;
	while (s[e] != '\0')
	{
		if (s[e] >= 'a' && s[e] <= 'z')
			s[e] = s[e] - 32;
	
		e++;
	}
	return (s);
}

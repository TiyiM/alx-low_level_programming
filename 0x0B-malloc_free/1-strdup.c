#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to the copied string (success), NULL (error)
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int e, len;

	e = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + e));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[e] = str[e]) != '\0')
		e++;

	return (duplicate);
}

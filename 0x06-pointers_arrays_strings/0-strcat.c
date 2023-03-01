#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcat - Write a function that concatenates two strings.
 * @dest: Returns a pointer to the resulting string dest
 * @src: appends the src string to the dest string,
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

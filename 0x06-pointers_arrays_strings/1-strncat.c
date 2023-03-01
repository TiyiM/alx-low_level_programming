#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strncat - Write a function that concatenates two strings.
 * @dest: string to be linked
 * @src: string to be linked to dest
 * @n: number of n bytes from src to be linked in a series
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int e = 0, dest_len = 0;

	while (dest[e++])
		dest_len++;

	for (e = 0; src[e] && e < n; e++)
		dest[dest_len++] = src[e];
	return (dest);
}

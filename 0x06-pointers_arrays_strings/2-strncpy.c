#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strncpy - Write a function that copies a string.
 * @dest: buffer storing the copy of the string
 * @src: source string
 * @n: max number of bytes to be copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int e = 0, src_len = 0;

	while (src[e++])
		src_len++;

	for (e = 0; src[e] && e < n; e++)
		dest[e] = src[e];

	for (e = src_len; e < n; e++)
		dest[e] = '\0';

	return (dest);

}

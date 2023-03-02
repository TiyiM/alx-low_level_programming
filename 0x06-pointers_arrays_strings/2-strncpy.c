#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strncpy - Write a function that copies a string.
 * @dest: buffer storing the copy of the string
 * @src: source char
 * @n: max number of bytes to be copied from src
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e = 0;

	while (e < n && *(src + e) != '\0')
	{
		*(dest + e) = *(src + e);
		e++;
	}
	while (e != n)
		dest[e++] = '\0';

	return (dest);
}

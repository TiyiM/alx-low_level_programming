#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory, if malloc fails,
 * status value it is equals to 98
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

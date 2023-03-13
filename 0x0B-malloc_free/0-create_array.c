#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to assing
 * Description: ceate an array of size and assign char c
 * Return: pointer  to array, NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int e;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		str[e] = c;
	return (str);
}

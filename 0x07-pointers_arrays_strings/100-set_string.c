#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * @s: pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

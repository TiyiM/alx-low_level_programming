#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - Write a function that concatenates all
 * the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string (success), NULL (error)
 */

char *argstostr(int ac, char **av)
{
	int e, m, p, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (m = 0; av[e][m] != '\0'; m++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	p = 0;

	for (e = 0; e < ac; e++)
	{
		for (m = 0; av[e][m] != '\0'; m++)
		{
			str[p] = av[e][m];
			p++;
		}
		str[p] = '\n';
		p++;
	}

	return (str);
}

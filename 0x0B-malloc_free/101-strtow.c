#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c =  0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;

		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - Write a function that splits a string into words.
 * @str: string to split
 *
 * Return: pointer to an array of srings (success), NULL (error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int e, p = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);
	for (e = 0; e <= len; e++)
	{
		if (str[e] == ' ' || str[e] == '\0')
		{
			if (c)
			{
				end = e;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[p] = tmp - c;
				p++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = e;
	}
	matrix[p] = NULL;
	return (matrix);
}

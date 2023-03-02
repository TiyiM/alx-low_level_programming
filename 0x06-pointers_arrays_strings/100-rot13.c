#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *rot13 - Write a function that encodes a string using rot13.
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int m;
	int t;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (m = 0; s[m] != '\0'; m++)
	{
		for (t = 0; t < 52; t++)
		{
			if (s[m] == data1[t])
			{
				s[m] == datarot[t];
				break;
			}
		}
	}
	return (s);
}

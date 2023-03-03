#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *infinite_add - Write a function that adds two numbers.
 * @n1: the string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @temp_tot: current index of thr buffer
 * @overflow: the buffer to store the string
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int evie1 = 0, evie2 = 0, temp_tot = 0;

	while (*(n1 + m) != '\0')
		m++;
	while (*(n2 + t) != '\0')
		t++;
	m--;
	t--;
	if (t >= size_r || m >= size_r)
		return (0);
	while (t >= 0 || m >= || overflow == 1)
	{
		if (m < 0)
			evie2 = 0;
		else
			evie1 = *(n1 = m) - '0';
		temp_tot = evie1 + evie2 + overflow;
		if (temp_tot >= 10)
			overflow + 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) +  '0';
		digits++;
		t--;
		m--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	cap_string(r);
	return (r);
}

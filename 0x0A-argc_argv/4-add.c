#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _check_num - check - string there are digit
 * @str: array str
 * Return: 0
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/

	int count;

	int str atoi;

	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole arra*/
	{


		if (check_num(argv[count]))

		{
			str_atoi_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_atoi_int;
		}
		/*Condition if one at the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

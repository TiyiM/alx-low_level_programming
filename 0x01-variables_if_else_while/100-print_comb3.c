#include <stdio.h>

/**
 * main - prints all possible different combinations of two diigts
 *
 * Return: Always 0
 *
 */
int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* prints tens digits*/
	{
		for (ones = '0'; ones <= '0'; ones++)/* prints omes digits*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repititions*/

			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0'))/* adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

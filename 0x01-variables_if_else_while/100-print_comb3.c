#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;

	for (digit1 = 0; digit1 < 90; digit1++)
	{
		for ()
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit1 != 89)

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

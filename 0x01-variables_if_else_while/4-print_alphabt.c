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
	char xh;

	for (xh = 'a'; xh <= 'z'; xh++)
	{
		if (xh != 'e' && xh != 'q')
		{
			putchar(xh);
		}
	}
	putchar('\n');
	return (0);
}

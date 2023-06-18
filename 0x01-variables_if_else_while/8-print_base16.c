#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 *
 *
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n <= 9)
		{
			putchar('0' + n);
		}
		else
		{
			putchar(n + 87);
		}
	}
	putchar('\n');
	return (0);
}

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
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 9 || j != 9)
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

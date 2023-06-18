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
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (k > j && j > i)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (k != 9 || j != 8 || i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

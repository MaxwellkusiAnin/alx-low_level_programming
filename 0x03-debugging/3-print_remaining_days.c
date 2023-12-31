#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, talking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

int print_remaining_day(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++:
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining day: %d\n", 366 -day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			prinrf("invalid date: %02d/%2d/%04d\n",
					month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}


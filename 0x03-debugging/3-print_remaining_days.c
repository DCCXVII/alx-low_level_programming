#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int i;
int remaining_days = 0;

for (i = month + 1; i <= 12; i++)
{
remaining_days += days[i-1];
}

remaining_days += day;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (month > 2)
{
remaining_days += 1;
}
else if (month == 2 && day == 29)
{
remaining_days = 0;
}
}

printf("Day of the year: %d\n", remaining_days);
}

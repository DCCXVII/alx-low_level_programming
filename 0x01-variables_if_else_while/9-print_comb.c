#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
/* print the digit */
putchar(digit + '0');

/* print the comma and space if the digit is not 9 */
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}

/* print a new line at the end */
putchar('\n');

return (0);
}

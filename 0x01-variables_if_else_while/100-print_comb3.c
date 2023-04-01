#include <stdio.h>

int main(void)
{
int i, j, k;

for (i = 0; i < 100; i++)
{
j = i % 10; /* Get the second digit */
k = i / 10; /* Get the first digit */

if (k < j) /* Print only if the first digit is less than the second */
{
putchar(k + '0'); /* Convert the digits to characters */
putchar(j + '0');

if (i < 89) /* Print the comma and space only if it is not the last combination */
{
putchar(','); 
putchar(' ');
}
}
}

putchar('\n'); /* Print the newline character at the end */

return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 *
 * @s: string to be converted to integer.
 *
 * Return: integer value of string.
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i;

for (i = 0; s[i] != '\0'; ++i)
{
if (s[i] == '-')
{
sign = sign * -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
{
break;
}
}

return (result * sign);
}

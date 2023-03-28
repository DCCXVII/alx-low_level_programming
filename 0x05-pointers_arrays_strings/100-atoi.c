#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: input string.
 *
 * Return: integer representation of input string.
 */
int _atoi(char *s)
{
int sign = 1, result = 0, i = 0;

while (s[i])
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
result = result * 10 + sign * (s[i] - '0');
if (result != 0 && !(s[i] >= '0' && s[i] <= '9'))
break;
i++;
}

return (result);
}

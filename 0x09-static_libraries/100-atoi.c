#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: input string
 *
 * Return: the integer value of the input string.
 */

int _atoi(char *s)
{
int res = 0;
int sign = 1;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
if (_isdigit(s[i]))
res = res * 10 + s[i] - '0';
if (_isdigit(s[i]) && _isdigit(s[i + 1]) && s[i + 1] != '\0')
res *= 10;
i++;
}
return (res * sign);
}

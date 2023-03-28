#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int i, n;

for (i = 0; str[i] != '\0'; i++)

if (i % 2 == 0)
n = i / 2;
else
n = (i - 1) / 2;

for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}

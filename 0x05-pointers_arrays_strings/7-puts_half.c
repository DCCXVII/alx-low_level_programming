#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0, i;

while (*(str + len) != '\0')
len++;

for (i = len / 2; i < len; i++)
_putchar(*(str + i));

_putchar('\n');
}

#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
int index = 0;

while (*(str + index))
{
_putchar(*(str + index));
index += 2;
}
_putchar('\n');
}

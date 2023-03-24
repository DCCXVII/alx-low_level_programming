#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'e' || letter == 'q')
continue;
putchar(letter);
}

putchar('\n');

return (0);
}

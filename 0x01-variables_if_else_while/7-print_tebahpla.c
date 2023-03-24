#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
int letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');
return (0);
}

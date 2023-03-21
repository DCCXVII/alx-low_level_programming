#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" using the _putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar\n";
int i;

for (i = 0; c[i] != '\0'; i++)
{
_putchar(c[i]);
}

return (0);
}

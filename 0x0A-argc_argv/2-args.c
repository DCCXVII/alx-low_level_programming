#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
{
_puts(argv[i]);
_putchar('\n');
}

return (0);
}

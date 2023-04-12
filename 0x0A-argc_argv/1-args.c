#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv; /* Cast argv to void to avoid unused parameter warning */
printf("%d\n", argc - 1);
return (0);
}

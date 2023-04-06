#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 *
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}

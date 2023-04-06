#include "main.h"

/**
 * _strcpy - Copies a string to a buffer
 *
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
char *p = dest;

while (*src != '\0')
*dest++ = *src++;
*dest = '\0';

return (p);
}

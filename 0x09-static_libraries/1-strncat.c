#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be appended from src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
while (*p)
p++;
while (n-- && *src)
*p++ = *src++;
*p = '\0';
return (dest);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
p++;
while (*src)
*p++ = *src++;
*p = '\0';
return (dest);
}

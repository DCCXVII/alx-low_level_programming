#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 */
char *_strcat(char *dest, char *src)
{
char *dest_start = dest;

/* Find the end of the destination string */
while (*dest != '\0')
{
dest++;
}

/* Append the source string to the destination string */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

/* Add the terminating null byte */
*dest = '\0';

return dest_start;
}

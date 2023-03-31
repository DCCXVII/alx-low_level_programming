#include "main.h"

/**
 * _strcat - concatenating
 * @dest:char
 * @src: char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
    char *p = dest;

    while (*p)
        p++;

    while (*src)
        *p++ = *src++;

    *p = '\0';

    return dest;
}


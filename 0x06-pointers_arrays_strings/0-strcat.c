#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *str = dest;

    while (*str)
        str++;

    while (*src)
    {
        *str = *src;
        str++;
        src++;
    }

    *str = '\0';

    return dest;
}

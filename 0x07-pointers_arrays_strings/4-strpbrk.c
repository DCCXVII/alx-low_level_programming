#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *accept_ptr;

while (*s)
{
accept_ptr = accept;
while (*accept_ptr)
{
if (*s == *accept_ptr)
{
return (s);
}
accept_ptr++;
}
s++;
}

return (NULL);
}

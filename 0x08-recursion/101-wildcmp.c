#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they are identical, otherwise
 * returns 0. The second string can contain the wildcard character '*'.
 *
 * @s1: First string
 * @s2: Second string with the wildcard character '*'
 *
 * Return: 1 if the strings are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));

while (*s1 != '\0')
{
if (wildcmp(s1, s2 + 1))
return (1);
s1++;
}
return (*s1 == '\0' && *s2 == '\0');
}

if (*s1 == '\0' || *s2 == '\0')
return (*s1 == *s2);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}

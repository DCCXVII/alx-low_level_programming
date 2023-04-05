#include "main.h"

/**
 * wildcmp - compares two strings and returns
 * @s1: the first string
 * @s2: the second string, which can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') /* both strings are empty */
return (1);

if (*s2 == '*') /* s2 begins with a wildcard */
{
if (*s1 == '\0') /* s1 is empty, check if the rest of s2 is also a wildcard */
return (wildcmp(s1, s2 + 1));
else /* try to match the rest of s2 with every possible suffix of s1 */
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}

if (*s1 == *s2) /* the first character matches */
return (wildcmp(s1 + 1, s2 + 1));

return (0); /* the first character doesn't match */
}

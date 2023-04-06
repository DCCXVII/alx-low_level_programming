#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the substring in haystack,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
;

if (!needle[j])
return (haystack + i);
}

return (0);
}

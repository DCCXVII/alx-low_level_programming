#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = 0;

/* Compute length of string */
while (*(s + len))
len++;

/* Recursively compare first and last characters */
if (len <= 1)
return (1);
else if (*s != *(s + len - 1))
return (0);
else
return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
}

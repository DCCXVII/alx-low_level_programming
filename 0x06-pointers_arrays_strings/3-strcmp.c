#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: Negative integer if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] && s2[i] && s1[i] == s2[i])
i++;

return (s1[i] - s2[i]);
}

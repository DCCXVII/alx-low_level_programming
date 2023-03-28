#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to string
 */
void rev_string(char *s)
{
int len = 0, i;
char temp;

/* Find length of string */
while (s[len])
len++;

/* Swap characters from start and end */
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

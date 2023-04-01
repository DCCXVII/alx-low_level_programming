#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: input string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet[] = "43071";
char letters[] = "aeotlAEOTL";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
str[i] = leet[j / 2];
}
}

return (str);
}

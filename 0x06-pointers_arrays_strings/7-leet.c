#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet[] = "43071";
char letters[] = "aeotlAEOTL";

for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j / 2];
break;
}
}
}

return str;
}

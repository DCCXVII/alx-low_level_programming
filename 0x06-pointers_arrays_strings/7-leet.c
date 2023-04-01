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
char leet[] = "4433007711";
char letters[] = "aeotlAEOTL";

for (i = 0; *(str+i); i++)
{
for (j = 0; j<=9 ; j++)
{
if (str[i] == letters[j])
{
letters[i] = leet[j];
}
}
}

return (str);
}

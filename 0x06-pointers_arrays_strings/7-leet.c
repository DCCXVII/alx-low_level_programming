#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: the encoded string
 */
char *leet(char *str)
{
int i, j;
char b[] = "4433007711";
char a[] = "aeotlAEOTL";

for (i = 0; str[i]; i++)
{
for (j = 0; a[j]; j++)
{
if (a[j] == str[i])
{
str[i] = b[j];

}
}
}

return (str);
}

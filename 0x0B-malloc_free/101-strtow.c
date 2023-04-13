#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words = NULL;
int i, j, k, len, wc = 0;

if (str == NULL || *str == '\0')
return (NULL);

len = strlen(str);

/* count number of words */
for (i = 0; i < len; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
wc++;
}

/* allocate memory for words */
words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);

/* populate words array */
for (i = 0, k = 0; i < len && k < wc; i++)
{
if (str[i] != ' ')
{
for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
;
words[k] = malloc(sizeof(char) * (j - i + 1));
if (words[k] == NULL)
{
while (k-- >= 0)
free(words[k]);
free(words);
return (NULL);
}
strncpy(words[k], &str[i], j - i);
words[k++][j - i] = '\0';
i = j;
}
}

words[k] = NULL;
return (words);
}

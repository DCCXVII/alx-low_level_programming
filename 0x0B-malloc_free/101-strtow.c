#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The string to count
 *
 * Return: The number of words
 */
int word_count(char *str)
{
int count = 0, i;

for (i = 0; str[i] != '\0'; ++i)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
++count;
}
}

return count;
}

/**
 * free_words - Frees an array of words
 * @words: The array of words to free
 *
 * Return: nothing
 */
void free_words(char **words)
{
int i;

for (i = 0; words[i] != NULL; ++i)
{
free(words[i]);
}

free(words);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int count, i, j, k, len;

if (str == NULL || *str == '\0')
{
return NULL;
}

count = word_count(str);

if (count == 0)
{
return NULL;
}

words = malloc(sizeof(char *) * (count + 1));

if (words == NULL)
{
return NULL;
}

for (i = 0, j = 0; j < count; ++i)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
len = 0;

for (k = i; str[k] != '\0' && str[k] != ' '; ++k)
{
++len;
}

words[j] = malloc(sizeof(char) * (len + 1));

if (words[j] == NULL)
{
free_words(words);
return NULL;
}

for (k = 0; k < len; ++k)
{
words[j][k] = str[i + k];
}

words[j][k] = '\0';

++j;
}
}

words[j] = NULL;

return words;
}

#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the argument count
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, k = 0;

/* check for null input */
if (ac == 0 || av == NULL)
return (NULL);

/* calculate the length of the new string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* add one for the new line character */
}

/* allocate memory for the new string */
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

/* copy the arguments into the new string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0'; /* terminate the string with a null character */

return (str);
}

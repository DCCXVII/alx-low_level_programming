#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array of size ac containing arguments
 *
 * Return: pointer to new string containing all arguments, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}

str[k] = '\0';
return (str);
}

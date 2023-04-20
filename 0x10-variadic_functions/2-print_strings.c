#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be passed to the function.
 * @...: The strings to be printed.
 *
 * Return: Always void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *str;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i != n - 1)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}
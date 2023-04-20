#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - Print a char
 * @args: A va_list pointing to a char
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - Print an integer
 * @args: A va_list pointing to an integer
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - Print a float
 * @args: A va_list pointing to a float
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - Print a string
 * @args: A va_list pointing to a string
 */
void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print anything
 * @format: A pointer to a string of types of arguments passed to the function
 *
 * Description: c - char, i - integer, f - float, s - char * (if NULL print (nil))
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t p[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (p[j].symbol)
		{
			if (format[i] == p[j].symbol)
			{
				printf("%s", separator);
				p[j].print(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

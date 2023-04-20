#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - Prints a char.
 * @args: A va_list pointing to the argument to be printed.
 */
void print_c(va_list args)
{
  printf("%c", va_arg(args, int));
}

/**
 * print_i - Prints an int.
 * @args: A va_list pointing to the argument to be printed.
 */
void print_i(va_list args)
{
  printf("%d", va_arg(args, int));
}

/**
 * print_f - Prints a float.
 * @args: A va_list pointing to the argument to be printed.
 */
void print_f(va_list args)
{
  printf("%f", va_arg(args, double));
}

/**
 * print_s - Prints a string.
 * @args: A va_list pointing to the argument to be printed.
 */
void print_s(va_list args)
{
  char *str;

  str = va_arg(args, char *);
  if (str == NULL)
    {
      printf("(nil)");
      return;
    }
  printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
  va_list args;
  int i = 0, j;
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
	      break;
	    }
	  j++;
	}
      i++;
    }

  va_end(args);
  printf("\n");
}

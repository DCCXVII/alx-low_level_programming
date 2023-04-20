#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>

/**
 * struct printer - A struct that defines a printer function
 * @symbol: A character representing a data type
 * @print: A function pointer to a printer function
 */
typedef struct printer
{
    char symbol;
    void (*print)(va_list);
} printer_t;

void print_all(const char * const format, ...);

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif /* VARIADIC_FUNCTION_H */

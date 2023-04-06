#include "main.h"
#include <stddef.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to fill
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */
void *_memset(void *s, int b, size_t n)
{
unsigned char *p = s;
while (n--)
*p++ = (unsigned char)b;
return (s);
}

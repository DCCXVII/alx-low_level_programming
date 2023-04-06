#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
char *d = dest;
const char *s = src;
while (n--)
*d++ = *s++;
return (dest);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:char
 * @src: char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;
	while (*(dest + dest_len) != '\0')
		dest_len++;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + dest_len + i) = *(src + i);
	
	*(dest + dest_len + i) = '\0';

	return dest;
}

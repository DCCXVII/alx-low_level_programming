#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _putchar(char c);

#endif /* MAIN_H */

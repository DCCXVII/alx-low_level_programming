#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

/**
 * word_count - Counts the number of words in a string
 * @str: The string to count
 *
 * Return: The number of words
 */
int is_whitespace(char c) {
return isspace(c) && c != '\n';
}

char **ft_split(char *str) {
int len = 0, i = 0, j = 0, k = 0;
char **result;
int in_word = FALSE;

while (str[i]) {
if (is_whitespace(str[i])) {
in_word = FALSE;
} else if (!in_word) {
len++;
in_word = TRUE;
}
i++;
}

result = (char **) malloc(sizeof(char *) * (len + 1));

if (!result) {
return NULL;
}

in_word = FALSE;
i = 0;

while (j < len) {
if (is_whitespace(str[i])) {
in_word = FALSE;
} else {
if (!in_word) {
k = i;
in_word = TRUE;
}
if (!str[i + 1] || is_whitespace(str[i + 1])) {
int word_len = i - k + 1;
char *word = (char *) malloc(sizeof(char) * (word_len + 1));
if (!word) {
return NULL;
}
int l = 0;
while (k <= i) {
word[l] = str[k];
k++;
l++;
}
word[l] = '\0';
result[j] = word;
j++;
}
}
i++;
}
result[j] = NULL;
return (result);
}

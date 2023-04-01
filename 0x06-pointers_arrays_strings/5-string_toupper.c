/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @s: Pointer to a string.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *s)
{
char *start = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (start);
}

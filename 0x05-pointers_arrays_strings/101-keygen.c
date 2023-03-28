#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
int i, rand_num;
char password[100];

srand(time(NULL));

for (i = 0; i < 58; i++)
{
rand_num = rand() % 62;

if (rand_num < 26)
password[i] = 'a' + rand_num;
else if (rand_num < 52)
password[i] = 'A' + (rand_num - 26);
else
password[i] = '0' + (rand_num - 52);
}

password[57] = 'a' + (2772 - 'a' - 'A' - '0');
password[58] = 'A';
password[59] = '\0';

printf("%s", password);

return (0);
}

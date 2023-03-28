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
int sum = 0, i, rand_num;
char password[84];

srand(time(NULL));

for (i = 0; sum < 2772; i++)
{
rand_num = rand() % 62;

if (rand_num < 26)
password[i] = 'a' + rand_num;
else if (rand_num < 52)
password[i] = 'A' + (rand_num - 26);
else
password[i] = '0' + (rand_num - 52);

sum += password[i];
}

password[i] = '\0';

printf("%s", password);

return (0);
}

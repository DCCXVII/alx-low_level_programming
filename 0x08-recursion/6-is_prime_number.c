#include "main.h"

/**
 * check_prime - checks if n is a prime number
 * @n: the number to check
 * @div: the current divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int div)
{
if (n % div == 0)
return (0);
if (div > n / 2)
return (1);
return (check_prime(n, div + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

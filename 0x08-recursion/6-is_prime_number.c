#include "main.h"

int find_prime(int n, int prime);

/**
 *find_prime - function to find in n is divisible by any number
 *between 2 and n/2
 * @n: integer to determine if prime or not
 * @prime: integer initialized at 2 to determine if it is divisible by n
 * Return: if n is prime return 1 if not return 0
 */

int find_prime(int n, int prime)
{
	if (prime > n / 2)
	return (1);

	else if (n % prime == 0)
	return (0);

	else
	return (find_prime(n, prime + 1));
}

/**
 * is_prime_number - function to detrmine if n is a prime number
 * @n: integer input to detrmine if it is a prime number
 * Return: if n is prime number will return 1 if not will return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	else
	return (find_prime(n, 2));
}

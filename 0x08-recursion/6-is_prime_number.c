#include "main.h"

int calculate_prime_number(int n, int i);

/**
 * is_prime_number - returns 1 if number is a prime number
 * @n: number
 *
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calculate_prime_number(n, n - 1));
}

/**
 * calculate_prime_number - using recursion to calculate prime number
 * @n: number
 * @i: value to use to calculate
 *
 * Return: 1 if number is prime 0 otherwise
 */
int calculate_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (calculate_prime_number(n, i - 1));
}

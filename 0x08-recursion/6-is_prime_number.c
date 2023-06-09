#include "main.h"

/**
 * prime_number - a function that checks if a number is prime
 *
 * @i: the input to check
 * @j: number that checks from 1 to i
 *
 * Return: success on no error run
 *
 */

int prime_number(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (prime_number(i, j + 1));
}

/**
 * is_prime_number - a function that tells if a number is prime
 *
 * @n: user input to check if it is a prime number
 *
 * Return: success if no error
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, 2));
}

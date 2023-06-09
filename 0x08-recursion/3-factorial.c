#include "main.h"

/**
 * factorial - a funtion that returns a factorial of a number
 *
 * @n: the number that is inputed to be calculated
 *
 * Return: always return 0 when run successful
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

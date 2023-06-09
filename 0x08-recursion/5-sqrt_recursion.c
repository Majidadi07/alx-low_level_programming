#include "main.h"

/**
 * _sqrt_recursion - function that calculate the square root of a number
 *
 * @n: the number to be squared
 *
 * Return: no error on a successful run
 *
 */

int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}

int sqroot(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (1);
	}
	return (sqroot(i, j + 1));
}

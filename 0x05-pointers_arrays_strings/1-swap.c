#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swap the value of the inputed parameters
 * @a: first parameter, an integer type
 * @b: second parameter, an integer type
 * Return: void function, no return value
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = *n;
}

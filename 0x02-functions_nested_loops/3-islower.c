#include "main.h"

/**
 * _islower - chech for c if its a lowercase input
 *
 * @c: perameter to check
 *
 * Return: give 1 for lowercase and 0 for other ase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

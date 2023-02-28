#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: char pointer as parameter
 * Return: void function
 *
 */

void rev_string(char *s)
{
	int n, m;
	char sav;

	n = 0;
	m = 0;

	while (s[n] != '\0')
		n++;

	while (m < n--)
	{
		sav = s[m];
		s[m++] = s[n];
		s[n] = sav;
	}
}

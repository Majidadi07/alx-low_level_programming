#include "main.h"

/**
 * _strcpy - function that copy the string pointed to by src
 *
 * @dest: last point
 * @src: starting point or source
 *
 * Return: a character
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		if (*src != '\0')
			*dest++ = *src++;
	return (a);
}

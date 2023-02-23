#include <unistd.h>
/**
 *
 * Return: 0 on success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

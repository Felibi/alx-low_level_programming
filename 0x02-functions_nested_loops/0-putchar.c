#include <unistd.h>

/**
 * _putchar - prints out _putchar.
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

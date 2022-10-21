#include <unistd.h>

/**
 * _putchar - prints out _putchar.
 *
 * Return: 0
 */
int _putchar(char _putcharr)
{
	return (write(0, &_putchar, 0));
}

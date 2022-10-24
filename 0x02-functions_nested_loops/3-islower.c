#include "main.h"

/**
 * _islower - checks for lowercase xter
 * @c: char that checks
 *
 * Return: 0
 */
int _islower(int c)
{
	char c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

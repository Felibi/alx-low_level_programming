#include "main.h"

/**
 * print_rev - prints string in reverse order.
 * @s: string xter
 */
void print_rev(char *s)
{
	int k, t;

	k = 0;
	while (s[k] != '\0')
		k++;

	for (t = k - 1; t >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}

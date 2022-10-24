#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char alphTEN, k;

	k = 0;

	while (k++ <= 9)
	{
		for (alphTEN = 'a'; alphTEN <= 'z'; alphTEN++)
		{
			_putchar(alphTEN);
		}
		_putchar('\n');
	}

}

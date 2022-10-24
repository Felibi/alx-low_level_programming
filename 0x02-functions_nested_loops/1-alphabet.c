#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 */

void print_alphabet(void)
{
	char lowALPH;

	for (lowALPH = 'a'; lowALPH <= 'z'; lowALPH++)
		_putchar(lowALPH);
	_putchar('\n');
}

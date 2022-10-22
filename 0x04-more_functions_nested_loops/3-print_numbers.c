#include "main.h"
/**
 * print_numbers - print 0 to 9
 */
void print_numbers(void)
{
	int k;

	k = 0;
	while (k < 10)
	{
		_putchar(k + '0');
		k++;
	}
	_putchar('\n');
}

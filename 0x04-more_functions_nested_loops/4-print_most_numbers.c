#include "main.h"
/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int k;

	k = 0;
	while (k <= 9)
	{
		if (k == 2 && k == 4)
		{
			continue;
		}
		else
		{
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}

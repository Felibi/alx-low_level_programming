#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 */
void more_numbers(void)
{
	int z, k;

	for (z = 0; z < 10; z++)
	{
		for (k = 0; k <= 14; k++)
		{
			_putchar(k + '0');

		}

	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: char parameter
 */
void print_diagonal(int n)
{
	int count = 0, syze;

	if (n > 0)
	{
		while (count < n)
		{
			for (syze = 0; syze < count; syze++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_square - print square
 * @size: size of square
 */
void print_square(int size)
{
	int k, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (k = 0; k < size; K++)
		{
			for (b = 0; b < (size); b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

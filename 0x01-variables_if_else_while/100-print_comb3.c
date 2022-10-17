#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int k, h;

	for (k = 0; k <= 9; k++)
	{
		putchar(k);
		for (h = 0; h <= 9; h++)
		{
			putchar(h);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

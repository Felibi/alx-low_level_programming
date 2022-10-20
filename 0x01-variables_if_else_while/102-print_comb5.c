#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int v, g;

	for (v = 0; v < 99; v++)
	{
		for (g = v + 1; g <= 99; g++)
		{
			putchar('0' + v / 10);
			putchar('0' + v % 10);
			putchar(' ');

			putchar('0' + g / 10);
			putchar('0' + g % 10);

			if (v == 98 && g == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

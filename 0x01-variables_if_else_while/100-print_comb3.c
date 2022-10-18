#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int k, g, h;

	g = 48;

	for (k = 48; k <= 58; k++)
	{
		for (h = g; h <= 58; h++)
		{
			if (k != h)
			{
				putchar(k);
				putchar(h);
			}
			if (k == h)
			{
				continue;
			}
			else if (k == 56 && h == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		g++;
	}
	putchar('\n');
	return (0);
}

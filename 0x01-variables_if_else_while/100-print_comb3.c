#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int k, g, h;

	g = '0';

	for (k = '0'; k <= '9'; k++)
	{
		for (h = g; h <= '9'; h++)
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
			else if (k == '8' && h == '9')
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

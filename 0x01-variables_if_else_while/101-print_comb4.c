#include <stdio.h>
/**
 * main - print all possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int v, g, c;

	for (v = '0'; v <= '9'; v++)
	{
		for (g = '0'; g <= '9'; g++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (v < g && g < c)
				{
					putchar(v);
					putchar(g);
					putchar(c);
					if (v == '7' && g == '8' && c == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

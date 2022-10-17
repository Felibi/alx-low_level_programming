#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int k, h;

	for (k = '0'; k <= '9'; k++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (k == h)
			{
				continue;
			}
			putchar(k);
			putchar(h);
			if (k == 8 && h == 9)
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
	putchar('\n');
	return (0);
}

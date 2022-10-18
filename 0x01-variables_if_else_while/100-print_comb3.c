#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int k, h;

	for (k = 48; k < 58; k++)
	{
		for (h = 48; h < 58; h++)
		{
			if (k == h)
			{
				continue;
			}
			putchar(k);
			putchar(h);
			if (k == 56 && h == 57)
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

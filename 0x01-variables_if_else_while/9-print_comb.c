#include <stdio.h>
/**
 * main - print all possible combinations of single digits.
 *
 * Return: 0
 */
int main(void)
{
	int sd = 0;

	while (sd < 10)
	{
		putchar(sd + '0');
		if (sd < 9)
		{
			putchar(',');
			putchar(' ');
		}
		sd++;
	}

	putchar('\n');
	return (0);
}

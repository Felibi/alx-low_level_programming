#include <stdio.h>
/**
 * main - print all possible combinations of single digits.
 *
 * Return: 0
 */
int main(void)
{
	int sd = '0';

	while (sd < '9')
	{
		putchar(sd);
		if (sd == "10")
		{
			break;
		}
		putchar(',');
		putchar(' ');
		sd++;
	}
	/*sd++;*/
	putchar('\n');
	return (0);
}

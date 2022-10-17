#include <stdio.h>
#include <stdbool.h>
/**
 * main - display alphabets excluding q and e.
 *
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		for (alph = 'q')
		{
			continue;
		}

		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}


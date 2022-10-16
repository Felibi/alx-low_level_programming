#include <stdio.h>
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
		for (alph = 'q' && alph = 'e')
		{
			break;
		}

		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}


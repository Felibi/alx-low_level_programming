#include <stdio.h>
/**
 * main - display alphabets excluding q and e.
 *
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	do(alph <= 'z'); {

		putchar(alph);
		alph++;
	} while (alph != 'q', &&alph != 'e')
	putchar('\n');
	return (0);
}


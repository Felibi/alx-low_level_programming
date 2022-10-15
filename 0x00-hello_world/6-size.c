/**
 * main - displays sizes of various data types.
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char xter;
	int integer;
	long int longint;
	long long int lg2;
	float floating;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(xter));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longint));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lg2));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floating));

	return (0);
}

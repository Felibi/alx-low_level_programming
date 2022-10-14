/**
 * main - displays sizes of various data types.
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of long int: %ld bytes\n", sizeof(long int));
	printf("Size of long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of char: %ld byte\n", sizeof(char));

	return (0);
}

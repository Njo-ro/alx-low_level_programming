#include <stdio.h>

/**
 * main - start of program
 *
 * Return: 0
 */

int main(void)
{
	int integerType;
	float floatType;
	long int long integerType;
	long long int long long integerType;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of long int: %ld bytes\n", sizeof(long integerType));
	printf("Size of long long int: %ld bytes\n", sizeof(long long integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of char: %ld byte\n", sizeof(charType));

	return (0);
}

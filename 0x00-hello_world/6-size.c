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
	long int longintegerType;
	long long int longlongintegerType;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of long int: %ld bytes\n", sizeof(longintegerType));
	printf("Size of long long int: %ld bytes\n", sizeof(longlongintegerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld byte\n", sizeof(charType));

	return (0);
}

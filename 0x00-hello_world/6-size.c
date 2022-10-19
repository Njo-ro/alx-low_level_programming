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
	longint longintegerType;
	longlongint longlongintegerType;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of longint: %ld bytes\n", sizeof(longintegerType));
	printf("Size of longlongint: %ld bytes\n", sizeof(longlongintegerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld byte\n", sizeof(charType));

	return (0);
}

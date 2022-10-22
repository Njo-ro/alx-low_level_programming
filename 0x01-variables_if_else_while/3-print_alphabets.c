#include <stdio.h>

/**
* main - prog begins to write alphabets
* return: 0
*/


int main(void)
{
	char ch = 'a';
	
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
* main - prog begins
* Return: 0
*/

int main(void) /*beginning of prog */
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');

	return (0);
}

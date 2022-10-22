#include <stdio.h>

/** main - prog begins */

int main(void) /*beginning of prog */
{
        char ch = 'a';

        for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);

        for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);
        putchar('\n');

        return (0);
}

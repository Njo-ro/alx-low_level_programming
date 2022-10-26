void print_alphabet(void);
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
}

int main()
{
	print_alphabet();
	return (0);
}

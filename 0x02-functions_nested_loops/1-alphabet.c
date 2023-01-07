#include <stdio.h>
/**
 * print _alphabet - prints alphabet in lower case, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}

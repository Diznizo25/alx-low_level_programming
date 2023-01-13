#include <stdio.h>
/**
 * Description - print _alphabet - prints alphabet in lower case, 
 * followed by a new line
 * Return: always 0
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

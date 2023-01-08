#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: it prints 10 times the alphabet, in lower case
 *
 * Return: aways 0
 */
void print_alphabet_x10(void)

{
	int n, co;
	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		co++;
		putchar('\n');
	}
}

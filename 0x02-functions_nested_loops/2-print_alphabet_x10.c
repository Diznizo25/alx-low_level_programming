#include "main.h"
/**
 * print_alhabet_x10 - prints 10 times the 
 * alphabet, in low case
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	for (count = 0; count <= 9; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

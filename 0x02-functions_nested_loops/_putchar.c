#include "main.h"
#include <stdio.h>
/**
 * putchar - writes the character c to stdout
 * @c - the character to print
 *
 * Return: On succsess 1.
 * on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

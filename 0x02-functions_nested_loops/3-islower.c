#include "main.h"
# include <stdio.h>
/**
 * Descreption - thus function checks for lower case characters
 * main - entry
 * Return: always 0
 */
int is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

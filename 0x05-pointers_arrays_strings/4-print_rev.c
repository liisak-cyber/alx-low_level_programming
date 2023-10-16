#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to print in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}

#include <stdio.h>
#include <main.h>

/**
 * print alphabet - entry point
 * description: Prints the aphabet with putchar
 * Returns: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

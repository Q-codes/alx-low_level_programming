#include <stdio.h>
/*#include <main.h>*/

/**
 * print alphabet - entry point
 * description print_alphabet: Prints the aphabet with putchar
 * Returns: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

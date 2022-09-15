#include <stdio.h>
/*#include <main.h>*/

/**
 * print_alphabet - write the the lower-case alphabet on a line
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

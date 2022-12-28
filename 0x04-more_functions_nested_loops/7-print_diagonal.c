#include "main.h"

/**
 * print_diagonal - print diagonal across terminal using '\'
 * @n: number of times to print '\'
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int count;
	int space;

	if (n < 0)
	{
		_putchar('\n');
	}

	else

	{
		for (count = 0; count <= n; count++)
		{
			for (space = 0; space <= count - 1; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

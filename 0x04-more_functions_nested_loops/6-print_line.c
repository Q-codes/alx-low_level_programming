#include "main.h"

/**
 * print_line - print straight line in terminal use _
 * @n: number of times to print '_'
 *
 * Return: return int n
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');

	else
		for (count = 0; count <= n; count++)
		{

			_putchar('_');
		}

	_putchar('\n');
}


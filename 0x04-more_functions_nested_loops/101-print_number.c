#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: Return n
 */

void print_number(int n)
{
	unsigned int x = 0;

	if (n < 0)
	{
		n = n * -1;

		x = n;

		_putchar('-');
	}
	else
	{
		x = n;
	}

	if (x / 10)
		print_number(x / 10);

	_putchar((x % 10) + '0');

}

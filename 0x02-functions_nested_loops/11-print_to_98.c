#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print  all natural numbers from 0 - 98
 * @n: natural number
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		_putchar(('0' + m));
		_putchar(',');
		_putchar(' ');
	}
}

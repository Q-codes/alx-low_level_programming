#include "main.h"

/**
 * print_square - print square using '#'
 * @size: size of square
 *
 * Return: Return nothing
 */

void print_square(int size)
{
	int len;
	int breadth;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (len = 0; len <= size - 1; len++)
		{
			for (breadth = 0; breadth <= size - 1; breadth++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

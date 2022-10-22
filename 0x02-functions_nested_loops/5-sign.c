#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints sign of a number
 * @n: given number
 * Return: Return (1) if n > (0)
 * Return (0) if n == (0)
 * Return (-1) if n < (0)
 */

int print_sign(int n)

{
	if (n > 0)
	{
		printf("+");
		return (1);
	}

	if (n == 0)
	{
		printf("0");
		return (0);
	}

	if (n < 0)
	{
		printf("-");
		return (-1);
	}

	return (0);
}

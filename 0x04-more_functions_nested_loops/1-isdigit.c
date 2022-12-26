#include <stdio.h>
#include "main.h"

/**
 * main - check if c is digit or not.
 * @c: variable to check if is digit or not
 *
 * Return: Always 0.
 */

int _isdigit(int c)

{

	if (c >= '0' && c <= '9')
		return (1);
	
	else
		return (0);
}

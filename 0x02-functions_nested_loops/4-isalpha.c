#include <stdio.h>
#include "main.h"

/**
 *_isalpha - checks if c is a letter, lower or uppercase
 *@c: The character to be checked
 *Return: returns (1) if c is a latter, lower or uppercase or (0) otherwise
 */

int _isalpha(int c)
{
	{
		if (c >= 'a' && c <= 'z')
			return (1);

		else
			if (c >= 'A' && c <= 'Z')
				return (1);
		else
			return (0);
	}
	return (0);

}


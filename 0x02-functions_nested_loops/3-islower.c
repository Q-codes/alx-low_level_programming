#include "main.h"



/**
*_islower - check if the given character is lower case
*Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

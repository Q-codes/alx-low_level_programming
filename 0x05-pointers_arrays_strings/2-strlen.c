#include "main.h"

/**
* main _strlen - returns the length of string
* @s: string to find length of
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	
	return (i);
}

#include "main.h"

/**
 * puts2 - prints every other character of a string, start with first char
 * @str: string to print every other character
 */

void puts2(char *str)

{

	int i = 0;



	while (*(str + i))

	{

		_putchar(*(str + i));

		i = i + 2;

	}

	_putchar('\n');

}

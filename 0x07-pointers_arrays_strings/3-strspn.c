#include "main.h"

/**
 * _strspn - gets lengthof a prefix substrin
 * @s: string to chec
 * @accept: string to check agains
 * Return: number of bytes of s in accep
 */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int i, j;



	for (i = 0; s[i]; i++)

	{

		for (j = 0; accept[j]; j++)

		{

			if (s[i] == accept[j])

				break;

		}

		if (!accept[j])

			break;

	}

	return (i);

}
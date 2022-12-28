#include <stdio.h>

/**
 * fizz_buzz - print numbers 1-100,
 * print 'fizz' for mulitples of 3, 'buzz' for multiples of 5
 * and 'fizzbuzz' for multiples of 3 and 5
 *
 * Return: Return nothing
 */

int main(void)
{
	int num;
	/**	int prod;

	prod = 3 * 5;
	*/

	for (num = 1; num <= 100; num++)
	{
		printf("%d", num);
		{
			if (num % 3 == 0)
			{
				printf("Fizz");
			}

			if (num % 5 == 0)
			{
				printf("Buzz");
			}

		}
	}
	printf("\n");

	return (0);
}

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

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", num);
		}

	}

	printf("\n");
	return (0);
}

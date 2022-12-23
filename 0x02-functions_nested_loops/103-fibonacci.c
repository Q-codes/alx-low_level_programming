#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 4000000; count++)
	{
		sum = fib1 + fib2;
		if (sum % 2 == 0)
		{
			printf("%lu", sum);
		}

		fib1 = fib2;
		fib2 = sum;
	}

		if (count == 3999999)
		{
			printf("\n");
		else
			printf(", ");
		}

	return (0);
}

#include <stdio.h>

/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0;  tens <= 9; tens++)
	{
		for (ones = tens + 1;  ones <= 9; ones++)
		{
			putchar((ones % 10) + '0');
			putchar((tens % 10) + '0');

			if (tens == 8 && ones == 9)
				continue;


			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}

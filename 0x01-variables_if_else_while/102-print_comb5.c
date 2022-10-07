#include <stdio.h>

/**
*main - prints all possible combinations of tw0 two-digit numbers
*
*Return: Always (0)
*/

int main(void)
{
	int digit1, digit2, digit3, digit4;


	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				for (digit4 = 0; digit4 <= 9; digit4++)
				{
					putchar((digit1 % 10) + '0');
					putchar((digit2 % 10) + '0');

					putchar(' ');

					putchar((digit3 % 10) + '0');
					putchar((digit4 % 10) + '0');

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}


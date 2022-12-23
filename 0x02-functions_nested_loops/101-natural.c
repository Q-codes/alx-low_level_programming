#include <stdio.h>


/**
 * natural: Compute and print multiples of 3 or 5 below 1024
 * main: main function
 * @n: list of natural numbers upto 1024
 * Return: Return value of 0
 */

int main(void)
{
	/*natural numbers up to but exclding 1024*/
	int n;
	int sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0) /*multiples of 3 or 5*/
		{
			sum += n;
		}
	}

	printf("%d\n", sum); /**print sum*/

return (0);
}

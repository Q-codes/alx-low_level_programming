#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{

	char a;
	int e;
	long int b;
	long long int c;
	float d;

	printf("Size of a char is: %zu byte(s)", sizeof(a));
	printf("\nSize of an int is: %zu byte(s)", sizeof(e));
	printf("\nSize of a long int is: %zu byte(s)", sizeof(b));
	printf("\nSize of a long long int is: %zu byte(s)", sizeof(c));
	printf("\nSize of a float is: %zu byte(s)", sizeof(d));

	return (0);

}

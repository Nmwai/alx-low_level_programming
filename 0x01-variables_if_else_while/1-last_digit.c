#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Prints the last digit of a randomly generated number
*and whether it is greater than 5, less than 6, or 0.
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char str[] = "Last digit of";
	if ((n % 10) > 5)
	{
	printf("%s %d is %d and is greater than 5\n", str, n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf("%s %d is %d and is less than 6 and not 0\n", str, n, n % 10);
	}
	else
	{
	printf("%s %d is %d and is 0\n", str, n, n % 10);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
/* main - start of the program*/
/* return - Always 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	("%d,is positive\n", n);
	}
	else
	(n = 0)
	{
	("%d, is zero\n", n);
	}
	if (n < 0)
	{
	("%d, is negative\n", n);
	}
	return (0);
}

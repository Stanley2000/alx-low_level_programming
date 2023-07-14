#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - the entry point of the program
  *Return: this shows the successful termination of the program
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("The number is postive\n");
	}
	else if (n == 0)
	{
		printf("The number is zero\n");
	}
	else
	{
		printf("The number is negative\n");
	}
	return (0);
}

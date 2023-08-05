#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: the argument vector
 * Return: 1 on error, 0 on success
 * atoi: converts character to integer
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2, pro;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		pro = num1 * num2;

		printf("%d\n", pro);
		return (0);
	}
}

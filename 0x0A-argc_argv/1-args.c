#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: the argument count
 * @argv: the argument vector
 * Return: shows successful termination of the program
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

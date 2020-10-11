#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to call arguments from command pront
 * @argc: counting number of arguments
 * @argv: every argument comming from command pront
 * Return: always return 0.
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0, result = 0;

	if (argc > 1)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = (n1 * n2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - program to call arguments from command pront
 * @argc: counting number of arguments
 * @argv: every argument comming from command pront
 * Return: always return 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

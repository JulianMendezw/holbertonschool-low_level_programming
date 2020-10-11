#include <stdio.h>

/**
 * main - program to call arguments from command pront
 * @argc: counting number of arguments
 * @argv: every argument comming from command pront
 * Return: always return 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n",  argv[i]);

	return (0);
}

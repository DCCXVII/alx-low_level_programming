#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	char *main_ptr = (char *) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *(main_ptr + i));
		if (i != num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

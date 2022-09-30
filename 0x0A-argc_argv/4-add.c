#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers and prints the result
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

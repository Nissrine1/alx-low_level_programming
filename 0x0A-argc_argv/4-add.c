
Pull requests
Issues
Codespaces
Marketplace
Explore
@Nissrine1
RyuzakiiL23 /
alx-low_level_programming
Public

Fork your own copy of RyuzakiiL23/alx-low_level_programming

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

alx-low_level_programming/0x0A-argc_argv/4-add.c
@RyuzakiiL23
RyuzakiiL23 add
Latest commit 149dcd4 Apr 9, 2023
History
1 contributor
46 lines (41 sloc) 599 Bytes
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program.
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 0 if program is successful, 1 if error occurs
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int num;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
	while (*arg)
	{
		if (!isdigit(*arg))
		{
		printf("Error\n");
		return (1);
		}
	arg++;
	}
	num = atoi(argv[i]);
	if (num <= 0)
	{
		continue;
	}
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

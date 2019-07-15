#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - give change with less amount of coins possible
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 if success and 1 if not enough arguments are supplied
 */
int main(int argc, char **argv)
{
	int j = 0;
	int totalcoins = 0;
	int numcoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{

		if (*argv[1] == '-')
		{
			printf("%d\n", 0);
			return (0);
		}
		if (!(isdigit(*argv[1])))
			return (1);

		while (numcoins != atoi(argv[1]))
		{
			if (numcoins + coins[j] <= atoi(argv[1]))
			{
				numcoins = numcoins +  coins[j];
				totalcoins++;
			}
			else
			{
				j++;
			}
		}
	} else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", totalcoins);

	return (0);
}

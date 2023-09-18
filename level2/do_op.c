#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int digits1;
	int digits2;

	if (ac == 4)
	{
		digits1 = atoi(av[1]);
		digits2 = atoi(av[3]);

		if (av[2][0] == '*')
			printf("%d", (digits1 * digits2));
		if (av[2][0] == '+')
			printf("%d", (digits1 + digits2));
		if (av[2][0] == '-')
			printf("%d", (digits1 - digits2));
		if (av[2][0] == '/')
			printf("%d", (digits1 / digits2));
	}
	printf("\n");
}

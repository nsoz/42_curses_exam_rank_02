#include <stdio.h>
#include <stdlib.h>

unsigned int ft_hcf(unsigned int a, unsigned int b)
{
	unsigned int try;

	try = 1;
	if (a >=  b)
		try = b;
	else
		try = a;
	while (try--)
		if ((a % try == 0) && (b % try == 0))
			return (try);
	return 0;
}
int main(int ac, char **av)
{
	int first;
	int second;

	if (ac == 3)
	{
		first = atoi(av[1]);
		second = atoi(av[2]);
		printf("%d", ft_hcf(first, second));
	}
	printf("\n");
}

#include <unistd.h>

int main(int ac, char **av)
{
	int	i = -1;

	if (ac == 2)
	{
		while (av[1][++i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] >= 'A' && av[1][i] <= 'M')
					av[1][i] = 'N' + ('M' - av[1][i]);
				else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
					av[1][i] = 'M' - (av[1][i] - 'N');
			}
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				if (av[1][i] >= 'a' && av[1][i] <= 'm')
					av[1][i] = 'n' + ('m' - av[1][i]);
				else if  (av[1][i] >= 'n' && av[1][i] <= 'z')
					av[1][i] = 'm' - (av[1][i] - 'n');
			}
			write(1, &av[1][i], 1);
		}
	}
	write (1, "\n", 1);
}

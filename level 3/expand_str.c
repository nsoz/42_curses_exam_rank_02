#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				check = 3;
				while (av[1][i] == ' ' || av[1][i] == '\t')
				{
					i++;
					if (av[1][i] == '\0')
						check = 0;
				}
			}
			while (check)
			{
				write(1, " ", 1);
				check--;
			}
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}

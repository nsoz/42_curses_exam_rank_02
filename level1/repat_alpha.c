#include <unistd.h>

int main(int ac, char **av)
{
	int r;
	int i;

	r = 0;
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				r = av[1][i] - 65;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				r = av[1][i] - 97;
			while (r >= 0)
			{
				write(1, &av[1][i], 1);
				r--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

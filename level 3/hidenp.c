#include <unistd.h>

int main(int ac, char **av)
{
	int a = 0;
	int i = 0;
	if (ac == 3)
	{
		while (av[1][a])
		{
			while(av[2][i])
			{
				if (av[1][a] == av[2][i])
				{
					a++;
					break ;
				}
				i++;
			}
		}
		if (av[1][a] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
		write(1, "\n", 1);
}
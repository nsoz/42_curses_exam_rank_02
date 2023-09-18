#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int t;
	char letter;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				t = (av[1][i] - 'A') + 13;
				if (t >= 26)
					t -= 26;
				write(1, &"ABCDEFGHIJKLMNOPQRSTUVWXYZ"[t], 1);
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				t = (av[1][i] - 'a') + 13;
				if (t >= 26)
					t -= 26;
				write(1, &"abcdefghijklmnopqrstuvwxyz"[t], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

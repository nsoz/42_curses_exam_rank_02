#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	a;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	a = nbr % 10 + '0';
	write(1, &a, 1);
}

int main()
{
	int i;
	i = 1;
	char a;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i < 10)
		{
			a = (i + '0');
			write(1, &a, 1);
		}
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}

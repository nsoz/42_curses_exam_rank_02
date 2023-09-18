#include <unistd.h>

void ft_putnbr(int nbr)
{
	char a;
	if(nbr > 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	a = nbr + '0';
	write(1, &a, 1);
}

int main(int ac, char **av)
{
	char ret;
	int	a;

	a = ac - 1;
	if (a < 10)
	{
		ret = a + '0';
		write(1, &ret, 1);
	}
	else
		ft_putnbr(a);
	write(1, "\n", 1);
}
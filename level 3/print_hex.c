#include <unistd.h>

int	ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void	ft_printhex(int num)
{
	if (num > 16)
	{
		ft_printhex(num / 16);
	}
	write(1, &"0123456789abcdef"[num % 16], 1);
}

#include <stdio.h>

int main(int ac, char **av)
{
	int num;

	if (ac == 2)
		ft_printhex(ft_atoi(av[1]));
	write(1, "\n", 1);
}

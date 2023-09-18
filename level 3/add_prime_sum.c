#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	while(n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
		n /= 10;
	}
	write(1, &"0123456789"[n], 1);
}

int	ft_atoi(char *str)
{
	int index;
	int num;

	num = 0;
	index = 0;
	while (str[index])
	{
		num *= 10;
		num += (str[index] - '0');
		index++;
	}
	return (num);
}

int main(int ac, char **av)
{
	int num;
	int prime_sum;
	int i;

	prime_sum = 0;
	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		while (num > 1)
		{
			i = 2;
			while ((num % i) != 0)
				i++;
			if (i == num)
				prime_sum += num;
			num--;
		}
	}
	ft_putnbr(prime_sum);
}
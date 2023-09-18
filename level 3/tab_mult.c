#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int num = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
		}
		i++;
	}
	return(num);
}

void	ft_putnbr(int num)
{
	if (num >= 10)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

int main(int ac, char **av)
{
	int num;
	int times;
	char print_times;

	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		times = 1;
		while (times < 10)
		{
			print_times = times + '0';
			write(1, &print_times, 1);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(num * times);
			write(1, "\n", 1);
			times++;
		}
	}
	return 0;
}

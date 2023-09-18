int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int ret;
	int check;

	check = 0;
	ret = 0;
	sign = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			ret *= 10;
			ret += (str[i] - '0');
			check = 1;
			i++;
		}
		if (check == 1)
			break ;
		else
			i++;
	}
	return (ret * sign);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_atoi("  	-123"));
}
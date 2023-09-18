#include <stdio.h>

int	ft_strlen(const char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

int	ft_base_calculator(int base, int index)
{
	int ret;

	ret = base;
	if (index == 0)
		return (1);
	while (index > 0)
	{
		ret *= base;
		index--;
	}
	return (ret / base);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int len = ft_strlen(str);
	int num;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'f')
		{
			num += (10 + (str[i] - 'a')) * ft_base_calculator(str_base, len);
			len--;
		}
		if (str[i] >= 'A' && str[i] <= 'F')
		{
			num += (10 + (str[i] - 'A')) * ft_base_calculator(str_base, len);
			len--;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			num += (str[i] - '0')* ft_base_calculator(str_base, len);
			len--;
		}
		i++;
	}
	return (num);
}

// int main()
// {
// 	printf("%d", ft_atoi_base("132221", 4));
// }
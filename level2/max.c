int		max(int* tab, unsigned int len)
{
	int	check;
	int i = 0;

	if (!tab || len == 0)
		return (0);
	while (i < len)
	{
		if (i == 0)
			check = tab[i];
		if (check < tab[i])
			check = tab[i];
		i++;
	}
	return (check);
}

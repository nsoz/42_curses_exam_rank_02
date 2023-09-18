unsigned int ft_hcf(unsigned int a, unsigned int b)
{
	unsigned int try;

	try = 1;
	if (a >=  b)
		try = b;
	else
		try = a;
	while (try--)
		if ((a % try == 0) && (b % try == 0))
			return (try);
	return 0;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int ret;
	unsigned int hcf;

	hcf = ft_hcf(a, b);
	ret = (a * b) / hcf;
	return (ret);
}

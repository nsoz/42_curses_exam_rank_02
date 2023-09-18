unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char a;

	while (i <= 7)
	{
		if (octet & (1 << i))
			a |= (1 << (7 - i));
		i++;
	}
	return (a);
}

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char bit;

	i = 7; 
	while (i >= 0)
	{
		bit = octet & (1 << i) ? '1' : '0';
		i--;
		write(1, &bit, 1);
	}
}

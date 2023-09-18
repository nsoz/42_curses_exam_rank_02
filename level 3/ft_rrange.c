#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	len;
	int	*arr;
	int	check;
	int	i = 0;

	check = (start > end) ? 1 : 0;
	if (start <= end)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;
	arr = malloc(len * sizeof(int));
	if (check == 1)
		while (len--)
			arr[i++] = start--;
	else
		while (len--)
			arr[i++] = start++;
	return (arr);
}

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int len;
	int *arr;
	int index;
	int check;

	check = 0;
	index = 0;
	if (start < end)
	{
		len = (end - start) + 1; 
		check = 1;
	}
	if (start == len)
		len = 1;
	if (start > end)
		len = (start - end) + 1;
	arr = malloc(len * sizeof(int));
	if(check == 1)
		while (len--)
		{
			arr[index] = start++;
			index++;
		}
	else
		while (len--)
		{
			arr[index] = start--;
			index++;
		}
	return(arr);
}

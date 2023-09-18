#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	while (src[i])
		i++;
	ret = malloc(i + 1);
	i = -1;
	while (src[++i])
		ret[i] = src[i];
	ret[i] = '\0';
	return (ret);
}

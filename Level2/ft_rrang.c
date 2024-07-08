#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len = (len - start) < 0 ? (((len - start) * -1) + 1) : ((len - start) + 1);
	int *range = (int *)malloc(sizeof(int) * len);
	int i = 0;

	while (i < len)
	{
		if (end < start)
			range[i] = end++;
		else
			range[i] = end--;
		i++;
	}
	return(range);
}
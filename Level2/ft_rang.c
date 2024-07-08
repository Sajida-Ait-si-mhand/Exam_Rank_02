#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int len = (len - start < 0) ? (((len - start)* -1) + 1) : ((len - start) + 1);
	int *range = (int *)malloc(sizeof(int) * len);
	if(range == NULL)
		return(NULL);
	int i = 0;
	while (i < len)
	{
		if (start < len)
			range[i] = start++;
		else
			range[i] = start--;
		i++;
	}
	return(range);
}

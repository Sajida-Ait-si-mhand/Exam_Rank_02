int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 87;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 55;
		i++;
	}
	return(sign *res);
}
#include <stdio.h>

int main()
{
	char *str = "1aA";
	int str_base = 16;
	int i  = ft_atoi_base(str, str_base);
	printf("the result:%d", i);
}
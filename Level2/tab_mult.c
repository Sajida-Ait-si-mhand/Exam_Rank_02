#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + *str - '0';
		++str;
	}
	return(res);
}
void ft_putnbr (int i)
{
	if (i >= 10)
		ft_putnbr(i / 10);
	char degit = i % 10 + '0';
	write(1, &degit, 1);
}
int main(int ac, char *av[])
{
	int i = 1;
	int x = ft_atoi(av[1]);
	if (ac == 2)
	{
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(x);
			write(1, " = ", 3);
			ft_putnbr(x * i);
			if (i < 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
#include <unistd.h>
void ft_putnbr(int x)
{
	if (x >= 10)
		ft_putnbr(x / 10);
	char digit = x % 10 + '0';
	write(1, &digit, 1);
}
int main(int ac, char *av[])
{
	(void)av;
	ft_putnbr(ac -1);
	write(1, "\n", 1);
	return(0);
}

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
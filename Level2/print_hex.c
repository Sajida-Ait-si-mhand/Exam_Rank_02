#include <unistd.h>

unsigned int  ft_atoi(char *str)
{
	unsigned int res = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		++str;
	}
	
	return (res);
}
void print_hex(int nbr)
{
	char *hex = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	nbr = hex[nbr % 16];
	write(1, &nbr, 1);	
}
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}
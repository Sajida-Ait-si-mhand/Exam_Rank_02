#include <unistd.h>
int ft_atoi(char *str)
{
    int res = 0;
    while (*str)
    {
        res = res * 10 + *str - '0';
        ++str;
    }
    return(res);
}

int ft_prime(int x)
{
    int i = 2;
    if (x <= 1)
        return(0);
    while (i * i <= x)
    {
        if (x % i == 0)
            return (0);
        i++;
    }
    return (1);
}
void ft_putnbr(int i)
{
    if (i >= 10)
        ft_putnbr(i / 10);
    char digit = i % 10 + '0';
    write(1, &digit, 1);
}

int main(int ac, char *av[])
{
    if(ac == 2)
    {
        int x = ft_atoi(av[1]);
        int sum = 0;

        while (x > 0)
        {
            if(ft_prime(x))
                sum += x;
            x--;
        }
        ft_putnbr(sum);
    }
    if (ac != 2)
        write(1,"0",1);
    write(1, "\n", 1);
}
#include <unistd.h>
int ft_atoi(char *str)
{
    int res= 0;
    while (*str)
    {
        res = res * 10 + *str - '0';
        ++str;
    }
    return(res);
}
void ft_prim(int a)
{
    int p = 2;
    while (a > p)
    {
        if (a % p == 0)
            return(0);
        p++;
    }
}
void ft_putchar (char c)
{
    write(1, &c, 1);
}
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 2;
        int x = ft_atoi(av[1]);
        int sum = 0;
        if (x <= 1)
            return (0);
        while (ft_prim(x) == 1)
        {
            sum += x;
        }
    }
    if (ac != 2)
        ft_putchar('0');
    ft_putchar (' ');
}
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_space(char c)
{
    if (c <= 32)
        return 1;
    return 0;
}
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 0;
        int space = 0;
        while (ft_space(av[1][i]))
            i++;
        while (av[1][i])
        {
            if (ft_space(av[1][i]))
                space = 1;
            if (!ft_space(av[1][i]))
            {
                if(space)
                    ft_putchar(' ');
                space = 0;
                ft_putchar(av[1][i]);
            }
            i++;
        }
        ft_putchar(' ');
    }
    ft_putchar('\n');
}

#include <unistd.h>
#include <stdio.h>
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
int ft_prim(int x)
{
    int i = 2;
    if (x <= 1)
        return(0);
    while (i < x)
    {
        if ( x%i  == 0)
            return(0);
        i++;
    }
    return(1);
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
char ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
    return(nb);
}
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 2;
        int n = ft_atoi(av[1]);
        int sum = 0;
        char a;
        printf("n:%d\n", n);
        while (i <= n)
        {
            if (ft_prim(i)==1)
                sum += i;
            i++;
        }
        a =ft_putnbr(sum);
        write(1, &a, 1);
    }
    else 
        write(1, "0", 1);
    write(1, "\n", 2);
}
#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_space(char c)
{
    if (c <= 32)
        return 1;
    return 0;
}
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 0;
        int space = 0;
        while (ft_space(av[1][i]))
            i++;
        while (av[1][i])
        {
            if (ft_space(av[1][i]) )
                space = 1;
            if (!ft_space(av[1][i]))
            {
                if (space)
                    ft_putchar(' ');
                space = 0;
                ft_putchar(av[1][i]);
            }
            i++;
        }

    }
    write(1, "\n", 1);
    
}

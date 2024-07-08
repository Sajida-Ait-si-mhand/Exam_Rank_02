#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_space(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

int main(int ac, char *av[])
{
    if(ac == 2)
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
    }
    write(1, "\n", 1);
    return(0);
}



#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i] <= 32)
            i++;
        while(av[1][i])
        {
            while(av[1][i] == ' ' || av[1][i] == '\t')
            {
                if(av[1][i + 1] != ' ' && av[1][i + 1] != '\t' && av[1][i + 1] != '\0')
                    write(1, " ", 1);
                i++;
            }
            if(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
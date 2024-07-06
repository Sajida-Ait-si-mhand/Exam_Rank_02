#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_space(char str)
{
    if (str <= 32)
        return(1);
    return(0);
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
                if (space)
                    ft_putchar(' ');
                space = 0;
                ft_putchar(av[1][i]);
            }      
            i++;
        }
            
    }
    ft_putchar('\n');
    return(0);
}
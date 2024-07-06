#include <unistd.h>
void ft_putchar (char c)
{
    write(1, &c, 1);
}
int ft_treespac(char c)
{
    if (c <= 32)
        return (1);
    return(0);
}
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 0;
        int tab = 0;
        while (ft_treespac(av[1][i]))
            i++;
        while (av[1][i])
        {
            if(ft_treespac(av[1][i]) == 1)
                tab = 1;
            if(ft_treespac(av[1][i]) == 0)
            {
                if (tab == 1)
                {
                    ft_putchar(' ');
                    ft_putchar(' ');
                    ft_putchar(' ');
                }
                tab = 0;
                ft_putchar(av[1][i]);
            }
            i++;
        }
    }
    ft_putchar('\n');
}
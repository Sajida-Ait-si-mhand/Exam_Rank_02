#include <unistd.h>
int ft_look(char *s, char c)
{
    while(*s)
    {
        if (*s == c)
            return(1);
        ++s;
    }
    return(0);
}
void inter(char *s1, char *s2)
{
    char seen[128] = {0};
    int i = 0;
    while (*s1)
    {
        if (ft_look(s2, *s1) && !ft_look(seen,*s1))
        {
            write(1, s1, 1);
            seen[i] = *s1;
            i++;
        }
        ++s1;
    }
}
int main(int ac, char *av[])
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
}
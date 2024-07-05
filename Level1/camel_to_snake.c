#include <unistd.h>
#include <stdio.h>
void camel_to_snake(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            write(1, "_", 1);
            str[i] += 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char *av[])
{
    if(ac == 2)
        camel_to_snake(av[1]);
    write(1, "\n", 1);
}
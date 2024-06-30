#include <unistd.h>
void ft_putchar (char c)
{
    write(1, &c, 1);
}

void rotone(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
            ft_putchar(*str + 1 );
        else if (*str == 'Z' || *str == 'z')
            ft_putchar(*str - 25);
        else 
            write(1, str, 1);
        ++str;
    }
}
int main(int ac, char *av[])
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
    return (0);
}



Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | "this        ...    is sparta, then again, maybe    not" | cat -ecat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
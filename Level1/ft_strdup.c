#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char *copy;
    int i = 0;
    while (src[i])
        i++;
    copy = (char *)malloc(sizeof(char) * i + 1);
    if (!copy)
        return(NULL);
    i = 0;
    while (src[i])
    {
        copy[i] = src [i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int main()
{
    char s1[] = "string";
    char s2[] = "moli";
    printf("%s", ft_strdup(s2));
}
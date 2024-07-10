#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
   int i = 0;
    while(s2[i] && i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int wc = 0;
    int k = 0;

    while(str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            i++;
    }

    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            i++;
        if (i > j)
        {
            out[k] = malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy (out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
    return (out);
}

int main()
{
    char str[]= " will die happy birthday 12 dec 1972";
    char **words = ft_split(str);
    for (int i = 0; words[i] != NULL; i++)
    {
        printf("word:%s\n", words[i]);
        free (words[i]);
    }
    free(words);
}
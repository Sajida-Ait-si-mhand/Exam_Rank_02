char    *ft_strrev(char *str)
{
    char *tmp;
    int i = 0;
    while (str[i])
        i++;
    i = 0;
    while (i > 0)
    {
        tmp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = tmp;
        i++;
    }
    return(str);
}
#include <stdio.h>
char *ft_strchr(const char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return ((char *)str);
        ++str;
    }
    return(0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while (s[i])
    {
        if (ft_strchr(accept , s[i]) == 0)
            break;
        i++;
    }
    return(i);
}

int main()
	{
	    char *s = "123456";
	    const char *accept = "1234568";
	    printf("%zu\n", ft_strspn(s, accept));
	}
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        while (reject[j])
        {
            if (s[i] == reject[i])
                    return(i);
            j++;
        }
        i++;
    }
    return(i);
}

int main()
{
    char s1[] = "ALLo";
    char d2[] = "slo";
    int i = ft_strcspn(s1, d2);
    printf("%d", i);
}
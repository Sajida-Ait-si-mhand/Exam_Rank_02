
#include <stdio.h>
#include <string.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return(char *)s1;
            j++;
        }
        
        i++;
    }
    return(s1);
}
int main()
{
    char *s1 = "012345";
    char *s2 = "3456";
    char *x = strpbrk(s1, s2);
    printf("ORIGINALE: %s\n", x);
    char *w = strpbrk(s1, s2);
    printf("MINE: %s", w);
}
int	ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (str[i] == ' ' || (str[i] <= 9 && str[i] >= 13))
        i++;
     if (str[i] == '-')
            sign = -1;
    if (str[i] == '-' || str[i] == '+') 
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (sign * result);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_atoi("45234535"));
}
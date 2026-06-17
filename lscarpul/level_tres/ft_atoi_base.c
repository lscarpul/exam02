
int get_value(char c)
{
    if(c >= '0' && c <= '9')
        return(c - '0');
    if(c >= 'a' && c <= 'f')
        return(c - 'a' + 10);
    if(c >= 'A' && c <= 'F')
        return(c - 'A' + 10);
    else
        return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    int value = 0;
    
    if(str[i] == '-')
        sign = sign * -1;
    
    while(str[i] != '\0')
    {
        value = get_value(str[i]);
        if(value == -1 || value > str_base)
            break;
        result = result * str_base + value;
        i++;
    }
    return (result * sign);
}

#include <stdio.h>
int main()
{
    int value = ft_atoi_base("2D1", 16);
    printf("%d", value);
}
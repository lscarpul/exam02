#include <stdlib.h>
#include <stdio.h>
char    *ft_strdup(char *src)
{
    char *str;
    int i = 0;
    while(src[i])
        i++;
    str = (char*)malloc((i + 1));
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main ()
{
    printf("%s", ft_strdup("mamma mia"));
}
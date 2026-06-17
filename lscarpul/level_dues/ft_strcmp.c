#include <stdio.h>

int    ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
}

int main()
{
    char *s1 = "miao bau";
    char *s2 = "ewsdytb";
    printf("%d", ft_strcspn(s1,s2));
}
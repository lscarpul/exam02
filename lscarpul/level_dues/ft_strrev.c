

char    *ft_strrev(char *str)
{
    int len = 0;
    int j = 0;
    char tmp;
    while(str[len] != '\0')
        len++;
    
    while(j < len / 2)
    {
        tmp = str[j];
        str[j] = str[len - 1 - j];
        str[len - 1 - j] = tmp;
        j++;
    }
    return (str);
}
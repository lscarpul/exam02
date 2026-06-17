size_t  ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    size_t counter = 0;
    while(s[i] != '\0')
    {
        j = 0;
        while(accept[j] != '\0' && s[i] != accept[j])
            j++;
        i++;
    }
    return(counter);
}
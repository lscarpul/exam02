#include <stdlib.h>
#include <stdio.h>


int glen(long nbr)
{
    int i = 0;
    if(nbr < 0)
        i++;
    while(nbr != 0)
    {
        nbr = nbr / 10;
        i++;
    }    
   return (i);
}

char	*ft_itoa(int nbr)
{
    long nlong = nbr;
    int len = glen(nlong);
    
    char *str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return(NULL);
    if(nlong < 0)
    {
        str[0] = '-';
        nlong = nlong * -1;
    }
    if (nlong == 0)
        str[0] = '0';

        while(nlong > 0)
        {
            len--;
            str[len] = nlong % 10 + '0';
            nlong = nlong / 10;
        }
    return (str);

}

int main()
{
	printf("%s", ft_itoa(-98765));
}

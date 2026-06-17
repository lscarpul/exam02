#include <stdlib.h>

int getlen(int n)
{
    int i = 0;
    if(n < 0)
        i++;
    while(n != 0)
    {
        n = n / 10;
        i++;
    }
    return(i);
}


char *itoa(int nbr)
{
    long len = getlen(nbr);
    char *str = (char *)malloc(len + 1);
    if (!str)
        return(NULL);
    str[len] = '\0';
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = nbr * -1;
    }

    if (nbr == 0)
        str[0] = '0';

   
    while(nbr > 0)
    {
        len--;
        str[len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }

    
    // else
    // {
    //     while(len > 0)
    //     {
    //         len--;
    //         str[len] = nbr % 10 + '0';
    //         nbr = nbr / 10;
            
    //     }
    // }

    return(str);
}

#include <stdio.h>

int main()
{
    int n = -422;
    printf("%s", itoa(n));
}
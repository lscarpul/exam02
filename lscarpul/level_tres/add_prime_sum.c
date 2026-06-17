#include <unistd.h>
#include <stdio.h>
void putnbr(int n)
{
    char *decimal = "0123456789";
    if(n >= 10)
        putnbr(n / 10);
    write(1, &decimal[n % 10], 1);
}

int atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result);
}


int   is_prime(int n)
{
    if(n <= 1)
        return (0);
    int i = n - 1;
    while(i > 1)
    {
        if((n % i) == 0)
        {
            return (0);
        }
        i--;
    }
    return(1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int n = atoi(argv[1]);
        if(n >= 0)
        {
            int i = 2;
            int somma = 0;
            while(n >= i)
            {
                if(is_prime(i))
                {
                    somma = somma + i;
                }
                i++;
            }
            putnbr(somma);
        }
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}

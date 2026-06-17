#include <unistd.h>

void putnbr(int n)
{
    char *decimal = "0123456789";
    if(n > 10)    
        putnbr(n / 10);
    write(1, &decimal[n % 10], 1);
}

void fizzbuzz()
{
    int i = 1;

    while(i < 101)
    {
        if(i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else if(i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else
            putnbr(i);
        write(1, "\n", 1);
        i++;
    }
}

int main()
{
    fizzbuzz();
    return(0);
}
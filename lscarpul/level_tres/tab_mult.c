#include <unistd.h>


int atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
        return (result);
}

void putnbr(int n)
{
    char *cifre = "0123456789";
    if(n >= 10)
        putnbr(n / 10);
    write(1, &cifre[n % 10], 1);
}


int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int n = atoi(argv[1]);
        int result;
        while (i <= 9)
        {
            result = i * n;
            putnbr(i);
            write(1, " x ", 3);
            putnbr(n);
            write(1, " = ", 3);
            putnbr(result);
            write(1, "\n", 1);
            i++;
        }
    }
    else 
        write(1, "\n", 1);
}
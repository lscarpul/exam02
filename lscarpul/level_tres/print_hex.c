#include <unistd.h>

void put_hex(int n)
{
    char *hexa = "1234567890abcdef";
    if(n >= 16)
        put_hex(n / 16);
    write(1, &hexa[n % 16], 1);
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
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int a = atoi(argv[1]);
        put_hex(a);
    }
    write(1, "\n", 1);
}
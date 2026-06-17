#include <unistd.h>

void putnbr(int n)
{
    char *decimal = "1234567890";
    if(n > 10)
        putnbr(n > 10);
    write(1, &decimal[n % 10], 1);
}

int main(int argc, char **argv)
{
    (void)argv;

    if (argc > 1)
        putnbr(argc - 1 - 1);
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}
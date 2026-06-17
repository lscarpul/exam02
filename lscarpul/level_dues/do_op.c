#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void do_op(char *n1, char sign, char *n2)
{
    int n1i = atoi(n1);
    int n2i = atoi(n2);
    int result = 0;
    if (sign == '+')
        result = n1i + n2i;
    if (sign == '-')
        result = n1i - n2i;
    if (sign == '/')
        result = n1i / n2i;
    if (sign == '%')
        result = n1i % n2i;
    if (sign == '*')
        result = n1i * n2i;
    printf("%d", result);
}
int main(int argc, char **argv)
{
    if(argc == 4)
        do_op(argv[1], argv[2][0], argv[3]);
    write(1, "\n", 1);
}
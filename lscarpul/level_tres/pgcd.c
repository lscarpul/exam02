#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int tmp = 0;
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    while(b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%d", a);
}
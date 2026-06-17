#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 2;
        int n = atoi(argv[1]);
        while(n >= i)
        {
            if(n % i == 0)
            {
                printf("%d", i);
                n = n / i;
                if(n >= i)
                    printf("*");
            }
            i++;
        }
    }printf("\n");
}
#include <unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(str[i-1] == ' ' || str[i-1] == '\t' || i == 0)
                str[i] -= 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}



int main(int argc, char **argv)
{
    if (argc > 0)
    {
        int i = 1;
        while(argc > i)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }  
    write(1, "\n", 1);
}
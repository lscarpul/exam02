#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    int count;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            count = (str[i] + 1 - 'a');
        else if(str[i] >= 'A' && str[i] <= 'Z')
            count = (str[i] + 1 - 'A');
        else
            count = 1;
        while(count > 0)
        {
            write(1, &str[i], 1);
            count--;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
}
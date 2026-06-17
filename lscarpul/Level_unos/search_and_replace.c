#include <unistd.h>

void search_and_replace(char *str, char src, char rep)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == src)
            str[i] = rep;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        if(argv[2][1] == '\0' && argv[3][1] == '\0')
            search_and_replace(argv[1], argv[2][0], argv[3][0]);
    }
    write(1, "\n", 1);
}
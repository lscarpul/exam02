#include <unistd.h>

void last_word(char *str)
{
    int i = 0;
    int end = 0;
    while(str[i] != '\0')
        i++;
    i--;
    while(str[i] == ' ' || str[i] == '\t')
        i--;
    end = i;
    while(str[i] != ' ' && str[i] != '\t')
        i--;
    i++;
    while (i <= end)
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
}
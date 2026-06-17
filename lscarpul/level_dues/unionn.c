
#include <unistd.h>

void ft_union(char *s1, char *s2)
{
    int i = 0;
    char printed[256] = {0};

    while(s1[i] != '\0')
    {
        if(printed[s1[i]] == 0)
        {
            write(1, &s1[i], 1);
            printed[s1[i]] = 1;
        }
        i++;
    }

    i = 0;

    while(s2[i] != '\0')
    {
        if(printed[s2[i]] == 0)
        {
            write(1, &s2[i], 1);
            printed[s2[i]] = 1;
        }
        i++;
    }   
}

int main(int argc, char **argv)
{
    if(argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
        
}
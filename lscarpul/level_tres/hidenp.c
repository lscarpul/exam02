#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *s1 = argv[1];
        char *s2 = argv[2];
        int i = 0;
        int j = 0;

        while(s2[j] != '\0')
        {
            if(s1[i] == s2[j])
                i++;
            j++;
        }
        if(s1[i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}
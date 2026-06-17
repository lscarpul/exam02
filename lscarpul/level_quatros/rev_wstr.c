#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int end = 0;
    int start = 0;
    char *str = argv[1];
    while(str[i])
        i++;
    end = i - 1;
        
    while(end >= 0)
    {
        start = end; 

            while(start >= 0 && str[start] != ' ' && str[start] != '\0')
                start--;
            i = start + 1;
            while(i <= end)
            {
                write(1, &str[i], 1);
                i++;
            }
            if(str[start] > 0)
                write(1, " ", 1);

        end = start - 1;
    }
    write(1, "\n", 1);
}

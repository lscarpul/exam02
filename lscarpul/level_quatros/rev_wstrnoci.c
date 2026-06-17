#include <unistd.h>

int main(int argc, char **argv)
{
   if(argc == 2)
   {
        int i = 0;
        int start = 0;
        int end = 0;
        char *str = argv[1];
        
        while(str[i] != '\0')
            i++;

        end = i - 1;
        while(end >= 0)
        {
            start = end;
            while (start >= 0 && str[start] != ' ' && str[start] != '\t')
                start--;
            i = start + 1;
            while(end >= i)
            {
                write(1, &str[i], 1);
                i++;
            }
            if(start >= 0)
                write(1, " ", 1);
            end = start - 1;
        }
        
   } 
}
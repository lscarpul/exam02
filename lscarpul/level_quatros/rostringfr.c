#include <unistd.h>

int is_space(char c)
{
    return(c == ' ' || c == '\t');
}


int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int i = 0;
        int printed = 0;
        int start = 0;
        int end = 0;
        char *str = argv[1];


        while(str[i] != '\0' && is_space(str[i]))
            i++;

        if(str[i] == '\0')
        {
            write(1, "\n", 1);
            return 0;                    .   ciao a   tutti  .
         }

        start = i;
        while(!is_space(str[i]))
            i++;
        end = i;                                                              ciao buongiorno  a tutti 

        
        while(str[i])
        {
            while(is_space(str[i]))
                i++;
            if(str[i])
            {
                if(printed)
                    write(1, " ", 1);
                printed = 0;
            }
            while(str[i] && !is_space(str[i]))
            {
                write(1, &str[i], 1);
                printed = 1;
                i++;
            }
            
        }
        if(printed)
            write(1, " ", 1);
        
        while(start < end)
        {
            write(1, &str[start], 1);
            start++;
        }

    }
    write(1, "\n", 1);
}


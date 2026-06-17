#include <unistd.h>

void snake_to_camel(char *str)
{
    int i = 0;
    int flag = 0;
   
    while(str[i] != '\0')
    {
        
        if(str[i] == '_')
        {    
            flag = 1;
            str[i+1]= str[i+1] - 32;
        }
        else if(flag == 1)
        {
            write(1, &str[i], 1);
            flag = 0;
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        snake_to_camel(argv[1]);
    }
    write(1, "\n", 1);
}
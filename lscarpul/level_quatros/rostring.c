int is_space(char c)
{
    return(c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{

    if(argc > 1)
    {
        int i = 0;
        int k = 0;
        int j = 0;
        char *str = argv[1];
        int words = 0;
        int tmp = 0;
        while(str[i])
        {
            while(is_space(str[i]))
                i++;
            if(!is_space(str[i]))
                words++;
            while (str[i])
                i++;
        }
        char **res = (char **)malloc(sizeof(char *) * words);
        i = 0;
        while(str[i])
        {
            k = 0;
            while(is_space(str[i]))
                i++;
            while(str[i + k] && !is_space(str[i + k]))
                k++;
            res[j] = (char *)malloc(sizeof(char ) * (k + 1));
            while(i < i + k)
            {
                res[j][tmp] = str[i + k];
                i++;
                tmp++;
            }
                res[j][tmp + 1] = "\0";
            j++;
        }
        int i = 0;
        int tmp = 0;
        while(res[i][tmp])
        {
            while(res[i][tmp])
            {
                write(1, &res[i][tmp], 1);
                tmp++;
            }
            write(1, ' ', 1);
            i++;
        } 
    } 
}
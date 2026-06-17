void epur_str(char *str)
{
    int i = 0;
    int flg = 0;
    while(str[i] == " " || str[i] == "\t")
        i++;
    
    while(str[i] != '\0')
    {
        if(str[i] == " " || str[i] == "\t")
            flg = 1;
        if (!(str[i] == " " || str[i] == "\t"))
        {
            if(flg == 1)
                write(1, " ", 1);    
            write(1, str[i], 1);    
        }
        i++;
    }

    
}

int main(int argc, char **argv)
{
    
}
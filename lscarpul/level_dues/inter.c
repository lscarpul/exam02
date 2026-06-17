#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *s1 = argv[1];
        char *s2 = argv[2];

        char printed[256] = {0};

        int i = 0;
        int j;
    
        while (s1[i] != '\0')
        {
            j = 0;
            while (s2[j] != '\0')
            {
                if(printed[s1[i]] == 0 && s1[i] == s2[j])
                {
                    write(1, &s1[i], 1);
                    printed[s1[i]] = 1;
                }
                j++;
            }
            i++;
        }
    }
   
}

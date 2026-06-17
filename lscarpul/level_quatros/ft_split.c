#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
    return(c == ' ' || c == '\n' || c == '\t');
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;

    int words = 0;
    if(!str)
        return (NULL);
    while (str[i])
    {
        while(str[i] && is_space(str[i]))
            i++;
        if(str[i])
            words++;
        while(str[i] && !is_space(str[i]))
            i++;
    }
    
    char **ris = (char **)malloc(sizeof(char *) * (words + 1));
    if(!ris)
        return (NULL);
    
    
    i = 0;
    while(str[i])
    {
        k = 0;
        while(str[i] && is_space(str[i]))
            i++;
        if(str[i])
        {
            while(str[i + k] && !is_space(str[i + k]))
            {
                k++; 
            }
            ris[j] = (char *)malloc(sizeof(char ) * k + 1);
            if(!ris)
                return(NULL);
            k = 0;
            while(str[k + i] && !is_space(str[i + k]))
            {
                ris[j][k] = str[i + k];
                k++;
            }
            ris[j][k] = '\0';
            i = i + k;
            j++;
        }
    }
    ris[j] = NULL;
    return (ris);
}

int main(void)
{
    char    str[] = "   ciao   mondo  test  ";
    char    **risultato;
    int     i;

    printf("Stringa originale: \"%s\"\n", str);
    
    // Chiamata alla tua funzione
    risultato = ft_split(str);

    // Stampa dei risultati
    if (risultato)
    {
        i = 0;
        while (risultato[i] != NULL)
        {
            printf("Parola %d: [%s]\n", i, risultato[i]);
            i++;
        }
    }
    else
    {
        printf("ft_split ha restituito NULL.\n");
    }

    return (0);
}
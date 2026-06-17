    #include <stdio.h>

    char    *ft_strcpy(char *s1, char *s2)
    {
        int i = 0;

        while(s2[i] != '\0')
        {
            s1[i] = s2[i];
            i++;
        }
        s1[i] = '\0';
        return (s1);
    }

int main(void)
{
    // DESTINAZIONE: Deve essere un array di caratteri con abbastanza spazio.
    // In questo modo la memoria è allocata e modificabile senza far crashare il programma.
    char s1[100] = "Testo vecchio che verrà cancellato"; 
    
    // SORGENTE: Va benissimo come stringa di sola lettura, perché la dobbiamo solo leggere.
    char *s2 = "Questo è il nuovo testo copiato!";

    printf("--- PRIMA DI FT_STRCPY ---\n");
    printf("s1 (destinazione) : %s\n", s1);
    printf("s2 (sorgente)     : %s\n\n", s2);

    // Eseguo la tua funzione
    ft_strcpy(s1, s2);

    printf("--- DOPO FT_STRCPY ---\n");
    printf("s1 (destinazione) : %s\n", s1);

    return (0);
}
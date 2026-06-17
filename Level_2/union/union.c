#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int seen[256] = {0};

		while (argv[1][i])
		{
			if (!seen[(unsigned char)argv[1][i]])
			{
				write(1, &argv[1][i], 1);
				seen[(unsigned char)argv[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!seen[(unsigned char)argv[2][i]])
			{
				write(1, &argv[2][i], 1);
				seen[(unsigned char)argv[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    // Tabella ASCII: 256 elementi inizializzati tutti a 0
    int seen[256] = {0};

    // Il programma esegue la logica SOLO se ci sono esattamente 2 argomenti
    if (argc == 3)
    {
        // 1. Scorriamo la PRIMA stringa (argv[1])
        i = 0;
        while (argv[1][i] != '\0')
        {
            // Castiamo il carattere a 'unsigned char' per evitare indici negativi indesiderati
            unsigned char c = argv[1][i];
            
            if (seen[c] == 0)
            {
                write(1, &c, 1);
                seen[c] = 1; // Segniamo il carattere come "già visto"
            }
            i++;
        }

        // 2. Scorriamo la SECONDA stringa (argv[2])
        i = 0;
        while (argv[2][i] != '\0')
        {
            unsigned char c = argv[2][i];
            
            if (seen[c] == 0)
            {
                write(1, &c, 1);
                seen[c] = 1; // Segniamo il carattere come "già visto"
            }
            i++;
        }
    }

    // Il newline viene stampato SEMPRE (se argc != 3 o alla fine della stampa)
    write(1, "\n", 1);
    return (0);
}
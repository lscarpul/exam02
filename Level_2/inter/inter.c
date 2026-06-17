#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	drawn;

	
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			drawn = 0;

			j = 0;
			while (j < i)
			{
				if (argv[1][j] == argv[1][i])
					drawn = 1;
				j++;
			}


			if (drawn == 0)
			{
				k = 0;

				while (argv[2][k])
				{
					if (argv[1][i] == argv[2][k])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					k++;
				}
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
    int lookup[256] = {0};
	char *s1=argv[1];
	char *s2=argv[2];

    if (argc == 3)
    {	
        i = 0;
        while (s2[i] != '\0')
        {
            lookup[s2[i]] = 1;
            i++;
        }

        i = 0;
        while (s1[i] != '\0')
        {
            if (lookup[s1[i]] == 1)
            {
                write(1, &s1[i], 1);
                lookup[s1[i]] = 2;
            }
            i++;
        }
    }

    write(1, "\n", 1);
    return (0);
}

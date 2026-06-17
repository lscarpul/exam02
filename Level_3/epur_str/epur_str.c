#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	flg;
	char *str = argv[1];

	if (argc == 2)
	{
		i = 0;
		flg = 0;
		while (str[i] == ' ' || str[i]  == '\t')
			i++;
		while (str[i] )
		{
			if (str[i] == ' ' || str[i] == '\t')
				flg = 1;
			else if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (flg)
					write(1, " ", 1);
				flg = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

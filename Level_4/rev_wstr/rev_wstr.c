#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	char *str = argv[1];

	if (argc == 2)
	{
		i = 0;
		while (str[i])
			i++;
		
		end = i - 1;
		
		while (end >= 0)
		{
			start = end;
			
			while (start >= 0 && str[start] != ' ' && str[start] != '\t')
				start--;
			i = start + 1;
			while (i <= end)
			{
				write(1, &str[i], 1);
				i++;
			}
			
			if (start >= 0)
				write(1, " ", 1);
			end = start - 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
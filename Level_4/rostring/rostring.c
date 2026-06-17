#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char **argv)
{
	int	i;
	int	first_word_start;
	int	first_word_end;
	int	has_printed_other_words;

	i = 0;
	has_printed_other_words = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i] && is_space(argv[1][i]))
		i++;

	if (!argv[1][i])
	{
		write(1, "\n", 1);
		return (0);
	}

	first_word_start = i;
	while (argv[1][i] && !is_space(argv[1][i]))
		i++;
	first_word_end = i;

	while (argv[1][i])
	{
		while (argv[1][i] && is_space(argv[1][i]))
			i++;

		if (argv[1][i])
		{
			if (has_printed_other_words)
				write(1, " ", 1);
			has_printed_other_words = 1;
			while (argv[1][i] && !is_space(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}

	if (has_printed_other_words)
		write(1, " ", 1);

	while (first_word_start < first_word_end)
	{
		write(1, &argv[1][first_word_start], 1);
		first_word_start++;
	}

	write(1, "\n", 1);
	return (0);
}
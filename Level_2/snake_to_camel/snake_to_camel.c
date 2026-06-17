/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:21:26 by columbux          #+#    #+#             */
/*   Updated: 2026/06/09 11:39:00 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	snake_to_camel(char *str)
// {
// 	char	c;
// 	int		i;

// 	i = 0;
// 	while (str[i++] != '\0')
// 	{
// 		if (str[i] == '_')
// 		{
// 			i++;
// 			c = str[i] - 32;
// 			write(1, &c, 1);
// 		}
// 		else
// 			write(1, &str[i], 1);
// 	}
// }

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		snake_to_camel(av[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }






#include <unistd.h>

void snake_to_camel(char *str)
{
    int i;
    int capitalize;

    i = 0;
    capitalize = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '_')
            capitalize = 1;
        else
        {
            if (capitalize == 1)
            {
                str[i] = str[i] - 32;
                write(1, &str[i], 1);
            }
            else
                write(1, &str[i], 1);
            capitalize = 0;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    // Se c'è esattamente un argomento, eseguiamo la funzione
    if (argc == 2)
    {
        snake_to_camel(argv[1]);
    }

    // Il newline viene stampato SEMPRE, come richiesto dagli esempi
    write(1, "\n", 1);
    return (0);
}
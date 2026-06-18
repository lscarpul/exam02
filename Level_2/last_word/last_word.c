/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:24:22 by columbux          #+#    #+#             */
/*   Updated: 2026/06/18 10:05:50 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
		
	i --;

	while (str[i] == ' ' || str[i] == '\t')
		--i;

	
	while (str[i] != ' ' && i > 0)
		i--;
		
	while (str[i] != '\0')
	{
		if (i == 0)
			write(1, &str[0], 1);
		i++;
		write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}



void	last_word(char *str)
{
	int	i;
	int	end;

	i = 0;

	while (str[i] != '\0')
		i++;
	
	i--;  

	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;  

	end = i;

	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;

	i++;

	while (i <= end)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	
	write(1, "\n", 1);
	return (0);
}
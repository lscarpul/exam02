/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:24:22 by columbux          #+#    #+#             */
/*   Updated: 2026/06/08 15:53:19 by enucci           ###   ########.fr       */
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
	
	i--;     //posizionato sull ultimo carattere della sringa

	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;     // salta spazi e tab cicalndo da fine a inizio stringa

	end = i; //salva nella variabile end il carattre in cui si ferma

	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;  //si muove dentro la parola. Si fermerà solo quando incontra di nuovo uno spazio, un tab, o se finisce la stringa

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
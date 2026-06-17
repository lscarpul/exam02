/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:55:22 by alex              #+#    #+#             */
/*   Updated: 2026/06/07 12:17:00 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rotone(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        /* Modifica direttamente la stringa */
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 'a' + 1) % 26 + 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (str[i] - 'A' + 1) % 26 + 'A';
        
        /* Stampa il carattere (modificato o originale) */
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:11:30 by alex              #+#    #+#             */
/*   Updated: 2026/06/07 09:45:12 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
    int i;
    int count;

    i = 0;
    while (str[i] != '\0')
    {
        /* Determina quante volte stampare il carattere */
        if (str[i] >= 'A' && str[i] <= 'Z')
            count = str[i] + 1 - 'A';
        else if (str[i] >= 'a' && str[i] <= 'z')
            count = str[i] + 1 - 'a';
        else
            count = 1; /* Se non è una lettera, stampa solo 1 volta */

        /* Stampa il carattere 'count' volte */
        while (count > 0)
        {
            write(1, &str[i], 1);
            count--;
        }
        i++;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:23:46 by ahiguera          #+#    #+#             */
/*   Updated: 2026/06/11 10:45:59 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int size;
    int i;

    // 1. Calcoliamo la dimensione dell'array (valore assoluto della differenza + 1)
    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;

    // 2. Allocazione della memoria per l'array di interi
    range = (int *)malloc(sizeof(int) * size);
    if (range == NULL)
        return (NULL); // Protezione se la malloc fallisce

    // 3. Riempiamo l'array
    i = 0;
    while (i < size)
    {
        range[i] = start;
        
        // Se start è minore di end dobbiamo salire, altrimenti dobbiamo scendere
        if (start < end)
            start++;
        if (start > end)
            start--;
            
        i++;
    }

    // 4. Restituiamo il puntatore all'array creato
    return (range);
}
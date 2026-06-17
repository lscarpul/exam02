/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 03:35:54 by ahiguera          #+#    #+#             */
/*   Updated: 2026/06/10 11:37:09 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    fprime(int number)
{
    if (number == 1)
    {
        printf("1");
        return ;
    }

    int factor = 2;

    while (number >= factor)
    {
        if (number % factor == 0)
        {
            printf("%d", factor);
            
            number /= factor;
            if (number >= factor)
                printf("*");
        }
        else
         factor++;
        
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        fprime(atoi(argv[1]));
    }
    printf("\n");
    return (0);
}

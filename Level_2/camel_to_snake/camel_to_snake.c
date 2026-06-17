/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:00:59 by alex              #+#    #+#             */
/*   Updated: 2026/06/11 11:37:47 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    camel_to_snake(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (i != 0)
                write(1, "_", 1);
            
            c = str[i] + 32;
            write(1, &c, 1);
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        camel_to_snake(argv[1]);
    write(1, "\n", 1);
    return (0);
}
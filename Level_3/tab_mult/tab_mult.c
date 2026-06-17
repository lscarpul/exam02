/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:55:19 by alex              #+#    #+#             */
/*   Updated: 2026/06/09 23:29:23 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int result;
    int i;

    i = 0;
    if (str[i] == '-')
        return (0);
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

void    put_nbr(int n)
{
    char    *decimal;

    decimal = "0123456789";
    if (n > 9)
        put_nbr(n / 10);
    write(1, &decimal[n % 10], 1);
}

void    tab_mult(int mult)
{
    int i;

    i = 1;
    while (i < 10)
    {
        put_nbr(i);
        write(1, " x ", 3); // Stampa " x " (lunghezza 3)
        put_nbr(mult);
        write(1, " = ", 3); // Stampa " = " (lunghezza 3)
        put_nbr(i * mult);
        write(1, "\n", 1);   // Stampa il newline a fine riga
        i++;
    }
}

int main(int argc, char **argv)
{
    int mult;

    if (argc == 2)
    {
        mult = ft_atoi(argv[1]);
        tab_mult(mult);
    }
    else
    {
        write(1, "\n", 1); // Stampa \n solo se non ci sono i parametri corretti
    }
    return (0);
}

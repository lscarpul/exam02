/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:19:47 by alex              #+#    #+#             */
/*   Updated: 2026/06/06 23:08:37 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int base)
{
	char	*number;
	int		result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	number = (char *)str;
	if (number[i] == '-')
	{
		sign *= -1;
		i++;
	}
	result = 0;
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			result = result * base + number[i] - '0';
		else if (number[i] >= 'A' && number[i] <= 'F')
			result = result * base + number[i] - '7';
		else if (number[i] >= 'a' && number[i] <= 'f')
			result = result * base + number[i] - 'W';
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("-aa", 16));
	return (0);
}
*/


// Funzione di supporto per ottenere il valore numerico di un carattere
int get_char_value(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (-1); // Ritorna -1 se il carattere non è esadecimale valido
}

int ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign;
    int i;
    int value;

    result = 0;
    sign = 1;
    i = 0;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        value = get_char_value(str[i]);
        if (value <= -1 || value >= str_base)
            break;
            
        result = result * str_base + value;
        i++;
    }

    return (result * sign);
}
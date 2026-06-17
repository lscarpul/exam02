/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:38:39 by ahiguera          #+#    #+#             */
/*   Updated: 2026/06/07 13:37:12 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int countersign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			countersign++;
		}
		if (countersign > 1)
			sign = 0;
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_atoi("-34855"));
	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:24:26 by ahiguera          #+#    #+#             */
/*   Updated: 2026/06/08 16:12:16 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (i <= len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max_val;

	if (len == 0 || !tab)
		return (0);

	max_val = tab[0];
	i = 1;

	while (i < len)
	{
		if (tab[i] > max_val)
		{
			max_val = tab[i];
		}
		i++;
	}

	return (max_val);
}



/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {2, 0, 1, 4, 4, 763, 2937};

	printf("%i\n", max(tab, 7));
	return (0);
}
 */
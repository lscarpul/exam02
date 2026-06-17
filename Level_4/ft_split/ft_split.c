/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:58:50 by columbux          #+#    #+#             */
/*   Updated: 2026/06/10 22:52:48 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		words;
	char	**res;

	if (!str)
		return (NULL);

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
			words++;
		while (str[i] && !is_space(str[i]))
			i++;
	}

	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
		{
			k = 0;
			while (str[i + k] && !is_space(str[i + k]))
				k++;
			
			res[j] = (char *)malloc(sizeof(char) * (k + 1));
			if (!res[j])
				return (NULL);
			
			k = 0;
			while (str[i] && !is_space(str[i]))
				res[j][k++] = str[i++];
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

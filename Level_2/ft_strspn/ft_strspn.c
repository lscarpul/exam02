/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 16:05:31 by enucci            #+#    #+#             */
/*   Updated: 2026/06/07 16:07:47 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t  i;
    size_t  j;

    i = 0;
	j = 0;

    while (s[i] != '\0')
    {
        while (accept[j] != '\0' && s[i] != accept[j])
		j++;
    
        if (accept[j] == '\0')
            return (i);
        i++;
    }
    return (i);
}
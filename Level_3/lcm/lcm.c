/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:26:04 by alex              #+#    #+#             */
/*   Updated: 2026/06/09 18:38:44 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n1 = a;
    unsigned int n2 = b;
    unsigned int tmp;

    if (a == 0 || b == 0)
        return (0);
		
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return ((n1 / a) * n2);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 01:14:50 by columbux          #+#    #+#             */
/*   Updated: 2026/06/18 10:16:33 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	i = 8;
	result = 0;
	while (i-- > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (result);
}

unsigned char    reverse_bits(unsigned char octet)
{
    unsigned char    res;
    int              i;

    res = 0;
    i = 8;
    while (i-- > 0)
    {
        res = (res << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return (res);
}

/* 
int	main(void)
{
	unsigned char	resultado;
	unsigned char	octet;

	octet = 0x42;
	resultado = reverse_bits(octet);
	printf("Octeto original: 0x%X\n", octet);
	printf("Octeto con bits intercambiados: 0x%X\n", resultado);
	return (0);
}
 */
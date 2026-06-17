/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:20:30 by alex              #+#    #+#             */
/*   Updated: 2026/06/09 18:12:50 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	pgcd(int a, int b)
{
	int	result;
	int	div;

	if (a < 0 || b < 0)
		return ;
	div = 1;
	result = 0;
	while (div <= a && div <= b)
	{
		if (a % div == 0 && b % div == 0)
			result = div;
		div++;
	}
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}


#include <stdio.h>  
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	rem;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		while (n2 != 0)
		{
			rem = n1 % n2;
			n1 = n2;
			n2 = rem;
		}
		printf("%d\n", n1);
	}
	else
	{
		printf("\n");
	}
	return (0);
}

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

int	is_prime(int n)
{
	if (n <= 1)
		return (0);
	
	int	i;
	
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	sum;
	int	i;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		sum = 0;
		i = 2;
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

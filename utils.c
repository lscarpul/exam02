

void	print_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

void put_nbr(int n)
{
    char *decimal;
	
    decimal = "0123456789";
    
    // Corretto: ricorsione solo se ci sono decine da stampare
    if (n >= 10)
        put_nbr(n / 10);
    write(1, &decimal[n % 10], 1);
}

void	put_num(int n)
{
	char	*decimal;

	decimal = "0123456789";
	if (n > 9)
		put_num(n / 10);
	write(1, &decimal[n % 10], 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}



void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}



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
	int	i;

	res = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}
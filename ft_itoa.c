#include "libft.h"

static int	count_digits(long nb)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char *str;
	long n;
	int len;
	int i;

	n = nbr;
	len = count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = len - 1;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (nbr == 0)
		str[0] = '0';
	return (str);
}
#include "libft.h"

int	ft_hexalower(unsigned long nb)
{
	size_t	n;
	char	c;
	int		ret;
	
	ret = 0;
	n = nb;
	if (n >= 16)
		ft_hexalower(n / 16);
	n = n % 16;
	if (n < 10)
		c = n + '0';
	else
		c = n + 87;
	ret += ft_putchar(c);
	return(ret);
}

int	ft_hexaupper(unsigned long nb)
{
	size_t	n;
	char	c;
	int		ret;

	ret = 0;
	n = nb;
	if (n >= 16)
		ft_hexaupper(n / 16);
	n = n % 16;
	if (n < 10)
		c = n + '0';
	else
		c = n + 55;
	ret += ft_putchar(c);
	return(ret);
}

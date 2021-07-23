#include "libft.h"

void	ft_hexalower(unsigned long nb)
{
	size_t	n;
	char	c;

	n = nb;
	if (n >= 16)
		ft_hexalower(n / 16);
	n = n % 16;
	if (n < 10)
		c = n + '0';
	else
		c = n + 87;
	ft_putchar(c);
}

void	ft_hexaupper(unsigned long nb)
{
	size_t	n;
	char	c;

	n = nb;
	if (n >= 16)
		ft_hexaupper(n / 16);
	n = n % 16;
	if (n < 10)
		c = n + '0';
	else
		c = n + 55;
	ft_putchar(c);
}

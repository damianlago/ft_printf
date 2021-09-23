#include "../includes/ft_printf.h"

void	ft_is_hexa_lower(t_printf *tab)
{
	unsigned long	hex;
	int		ret;

	hex = va_arg(tab->args, unsigned long);
	ret = ft_hexalower(hex);
	tab->len += ret;
}

void	ft_is_hexa_upper(t_printf *tab)
{
	unsigned long	hex;
	int		ret;

	hex = va_arg(tab->args, unsigned long);
	ret = ft_hexaupper(hex);
	tab->len += ret;
}

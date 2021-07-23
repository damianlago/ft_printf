#include "../includes/ft_printf.h"

void	ft_is_hexa_lower(t_printf *tab)
{
	unsigned long	hex;

	hex = va_arg(tab->args, unsigned long);
	tab->len += ft_hexalower(hex);
}

void	ft_is_hexa_upper(t_printf *tab)
{
	unsigned long	hex;

	hex = va_arg(tab->args, unsigned long);
	tab->len += ft_hexaupper(hex);
}

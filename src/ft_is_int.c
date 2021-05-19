#include "../includes/ft_printf.h"

void	ft_is_int(t_printf *tab)
{
	int	x;
	char	*aux;

	x = va_arg(tab->args, int);
	aux = ft_itoa(x);
	tab->len += ft_putstr(aux);
}

void	ft_is_u_int(t_printf *tab)
{
	int	x;
	char	*aux;

	x = va_arg(tab->args, unsigned int);
	aux = ft_u_itoa(x);
	tab->len += ft_putstr(aux);
}

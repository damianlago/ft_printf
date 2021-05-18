#include "../includes/ft_printf.h"

t_printf	*ft_initialise(t_printf *tab)
{
	tab->i = 0;
	tab->len = 0;
	tab->minus = 0;
	tab->dot = 0;
	tab->zero = 0;
	tab->hash = 0;
	tab->width = 0;
	tab->precision = 0;
	return (tab);
}

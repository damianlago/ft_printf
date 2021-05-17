#include "../includes/ft_printf.h"

t_printf	*ft_initialise(t_printf *tab)
{
	tab->perc = 0;
	tab->widht = 0;
	tab->prec = 0;
	tab->zero = 0;
	tab->point = 0;
	tab->dash = 0;
	tab->sign = 0;
	tab->space = 0;
	tab->is_zero = 0;
	tab->len = 0;
	return (tab);
}

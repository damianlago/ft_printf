#include "../includes/ft_printf.h"

void	ft_is_str(t_printf *tab)
{
	char *str;

	str = va_arg(tab->args, char *);
	tab->len += ft_putstr(str);
}

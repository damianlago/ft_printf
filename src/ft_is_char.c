#include "../includes/ft_printf.h"

void	ft_is_char(t_printf *tab)
{
	char a;

	a = va_arg(tab->args, int);
	tab->len += ft_putchar(a);
}

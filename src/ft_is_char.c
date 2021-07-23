#include "../includes/ft_printf.h"

void	ft_is_char(t_printf *tab)
{
	char a;

	a = va_arg(tab->args, int);
	tab->len += ft_putchar(a);
}

void	ft_is_str(t_printf *tab)
{
	char	*str;
	
	str = va_arg(tab->args, char *);
	tab->len += ft_putstr(str);
}

void	ft_is_pointer(t_printf *tab)
{
	char		*ptr;

	ptr = va_arg(tab->args, char *);
	tab->len += ft_pointeradress(ptr);
}

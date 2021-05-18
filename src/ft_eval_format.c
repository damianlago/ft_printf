#include "../includes/ft_printf.h"

int	ft_eval_format(const char *format, t_printf *tab, int i)
{
	while (!ft_strchr(("cspdiuxX%"), format[i]))
	{
		if (format[i] == '.')
			tab->dot = 1;
		else if (format[i] == '-')
			tab->minus = 1;
		else if (format[i] == '0')
			tab->zero = 1;
		else if (format[i] == '*')
			tab->hash = 1;
		i++;
	}
	if (ft_strchr(("cspdiuxX%"), format[i]))
		ft_conversion(format, tab, i);
	return (i);
}

int	ft_conversion(const char *format, t_printf *tab, int i)
{
	if (format[i] == 'c')
		ft_is_char(tab);
	else if (format[i] == 's')
		ft_is_str(tab);
	return (i++);
}

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int i;
	int ret;
	t_printf *tab;

	i = -1;
	ret = 0;
	tab = (t_printf *)malloc(sizeof(t_printf));
	if (!tab)
		return (-1);
	else
		ft_initialise(tab);
	va_start(tab->args, format);
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(format, tab, i + 1);
		else
			ret += ft_putchar(format[i]);
	}
	va_end(tab->args);
	ret += tab->len;
	free(tab);
	return (ret);
}

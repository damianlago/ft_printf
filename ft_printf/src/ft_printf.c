/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:47:41 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:48:08 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_printf	*ft_initialise(t_printf *tab)
{
	tab->i = 0;
	tab->len = 0;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			ret;
	t_printf	*tab;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:37:44 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:40:12 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_eval_format(const char *format, t_printf *tab, int i)
{
	if (ft_strchr(("cspdiuxX%"), format[i]))
	{
		if (format[i] == 'c')
			ft_is_char(tab);
		else if (format[i] == 's')
			ft_is_str(tab);
		else if (format[i] == 'd' || format[i] == 'i')
			ft_is_int(tab);
		else if (format[i] == 'u')
			ft_is_u_int(tab);
		else if (format[i] == 'p')
			ft_pointer(tab, format, i);
		else if (format[i] == 'x' || format[i] == 'X')
			ft_hex_print(tab, format, i);
		else if (format[i] == '%')
			tab->len += ft_putchar('%');
		return (i++);
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:40:27 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:41:22 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_is_char(t_printf *tab)
{
	char	a;

	a = va_arg(tab->args, int);
	tab->len += ft_putchar(a);
}

void	ft_is_str(t_printf *tab)
{
	char	*str;

	str = va_arg(tab->args, char *);
	tab->len += ft_putstr(str);
}

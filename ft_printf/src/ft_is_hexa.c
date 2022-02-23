/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:41:40 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/22 19:01:16 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	hex_len(unsigned long long num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

void	ft_hex_convert(unsigned long long num, const char *format, int i)
{
	if (num >= 16)
	{
		ft_hex_convert(num / 16, format, i);
		ft_hex_convert(num % 16, format, i);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (format[i] == 'x' || format[i] == 'p')
				ft_putchar(num - 10 + 'a');
			if (format[i] == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

void	ft_hex_print(t_printf *tab, const char *format, int i)
{
	unsigned int	num;

	num = va_arg(tab->args, unsigned int);
	if (num == 0)
		tab->len += write(1, "0", 1);
	else
		ft_hex_convert(num, format, i);
	tab->len += hex_len(num);
}

void	ft_pointer(t_printf *tab, const char *format, int i)
{
	unsigned long long	ptr;

	ptr = va_arg(tab->args, unsigned long long);
	tab->len += write(1, "0x", 2);
	if (ptr == 0)
		tab->len += write(1, "0", 1);
	else
		ft_hex_convert(ptr, format, i);
	tab->len += hex_len(ptr);
}

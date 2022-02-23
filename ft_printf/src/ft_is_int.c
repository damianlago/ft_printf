/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:44:49 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:46:37 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_is_int(t_printf *tab)
{
	int		x;
	char	*aux;

	x = va_arg(tab->args, int);
	aux = ft_itoa(x);
	tab->len += ft_putstr(aux);
	free(aux);
}

int	ft_elen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_elen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

void	ft_is_u_int(t_printf *tab)
{
	int				count;
	unsigned int	aux;
	char			*num;

	aux = va_arg(tab->args, unsigned int);
	count = 0;
	if (aux == 0)
		tab->len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(aux);
		count += ft_putstr(num);
		free(num);
	}
	tab->len += count;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:52:34 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:53:18 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hexalower(unsigned long nb)
{	
	size_t	n;
	char	c;

	n = nb;
	c = 0;
	if (n >= 16)
	{
		ft_hexalower(n / 16);
		n = n % 16;
	}
	else
	{
		if (n < 10)
			c = n + '0';
		else
			c = n - 10 + 'a';
	}
	ft_putchar(c);
}

int	ft_hexaupper(unsigned long nb)
{
	size_t	n;
	char	c;
	int		ret;

	ret = 0;
	n = nb;
	if (n >= 16)
		ft_hexaupper(n / 16);
	n = n % 16;
	if (n < 10)
		c = n + '0';
	else
		c = n + 55;
	ret += ft_putchar(c);
	return (ret);
}

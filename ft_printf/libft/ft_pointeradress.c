/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeradress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:54:06 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:57:04 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pointeradress(char *str)
{
	size_t	*c;
	int		ret;

	c = (size_t *)&str;
	ret = ft_putstr(" 0x ");
	ret += ft_hexaupper(*c);
	return (ret);
}

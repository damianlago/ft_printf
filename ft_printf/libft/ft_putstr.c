/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:19:31 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/05/18 16:40:02 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		ret += ft_putchar(str[i]);
		i++;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:58:11 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 20:03:11 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_u_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_u_itoa(int n)
{
	char	*s;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_u_len(nb);
	s = malloc(sizeof(char) * (1 + len));
	if (s == NULL)
		return (NULL);
	s[len--] = '\0';
	if (nb == 0)
		s[0] = 48;
	if (nb < 0)
		return (NULL);
	while (nb > 0)
	{
		s[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}

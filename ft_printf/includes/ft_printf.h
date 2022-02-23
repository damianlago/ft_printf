/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:49:00 by dlago-mo          #+#    #+#             */
/*   Updated: 2022/02/15 19:51:10 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_printf
{
	va_list	args;
	int		i;
	int		len;
}	t_printf;

int			ft_printf(const char *format, ...);
t_printf	*ft_initialise(t_printf *tab);
int			ft_eval_format(const char *format, t_printf *tab, int i);
void		ft_is_char(t_printf *tab);
void		ft_is_str(t_printf *tab);
void		ft_is_int(t_printf *tab);
void		ft_is_u_int(t_printf *tab);
void		ft_pointer(t_printf *tab, const char *format, int i);
void		ft_hex_print(t_printf *tab, const char *format, int i);

#endif

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "../libft/libft.h"

typedef	struct	s_printf
{
	va_list	args;
	int	i;
	int len;
	int minus;
	int dot;
	int zero;
	int hash;
	int width;
	int precision;
}	t_printf;

int			ft_printf(const char *format, ...);
t_printf	*ft_initialise(t_printf *tab);
int			ft_eval_format(const char *format, t_printf *tab, int i);
int			ft_conversion(const char *format, t_printf *tab, int i);
void		ft_is_char(t_printf *tab);
void		ft_is_str(t_printf *tab);
void		ft_is_int(t_printf *tab);
void		ft_is_u_int(t_printf *tab);
void		ft_is_pointer(t_printf *tab);

#endif

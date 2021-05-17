#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "../libft/libft.h"

typedef	struct	s_printf
{
	va_list	args;
	int	perc;
	int	widht;
	int	prec;
	int	zero;
	int	point;
	int	dash;
	int	sign;
	int	space;
	int	is_zero;
	int	len;
}	t_printf;

int		ft_printf(const char *format, ...);
t_printf	*ft_initialise(t_printf *tab);
int		ft_eval_format(const char *format, t_printf *tab, int i);

#endif

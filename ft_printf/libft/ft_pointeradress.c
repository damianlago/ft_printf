#include "libft.h"

int	ft_pointeradress(char *str)
{
	size_t	*c;
	int	ret;

	c = (size_t *)&str;
	ret = ft_putstr("0x");	
	ret += ft_hexalower(*c);
	return(ret);
}

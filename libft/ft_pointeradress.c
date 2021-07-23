#include "libft.h"

void	ft_pointeradress(char *str)
{
	size_t	*c;
	
	c = (size_t *)&str;
	ft_hexalower(*c);
}

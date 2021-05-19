#include "libft.h"

char	*ft_hexadecimal(size_t num)
{
	size_t	temp;
	char	hexanum[100];
	int	i;

	i = 1;
	while (num != '\0')
	{
		temp = num / 16;
		if (num < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexanum[i++] = temp;
		num = num / 16;			
	}
	return (hexanum);
}

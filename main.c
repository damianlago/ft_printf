#include "includes/ft_printf.h"
#include "stdio.h"

int	main(void)
{
	int ret;

	ret = ft_printf("%c%s d", 'g', "hola");
	printf("%d", ret);
	return (0);
}

#include "includes/ft_printf.h"
#include "stdio.h"

int	main(void)
{
	int ret;
	void *str;
	int data = 29;
	char test = 'h';

	ft_printf("%p", str);
	printf("\n%p", str);
	return (0);
}

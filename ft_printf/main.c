#include "includes/ft_printf.h"
#include "stdio.h"

int	main(void)
{
	int ret;
	char c = 'a';
	char *s = "Test";
	void *str;
	int d = 07;
	int i = 8;
	unsigned int u = 2;
	int h_low = 222;
	int h_up = 333;
	

	printf("Character: %c\n", c);
	ret = ft_printf("%c", c);
	printf("\n%d\n", ret);

	printf("String: %s\n", s);
	ret = ft_printf("%s", s);
	printf("\n%d\n", ret);

	printf("Pointer: %p\n", str);
	ret = ft_printf("%p", str);
	printf("\n%d\n", ret);

	printf("Decimal: %d\n", d);
	ret = ft_printf("%d", d);
	printf("\n%d\n", ret);

	printf("Intenger: %i\n", i);
	ret = ft_printf("%i", i);
	printf("\n%d\n", ret);

	printf("Unsigned Decimal: %u\n", u);
	ret = ft_printf("%u", u);
	printf("\n%d\n", ret);

	printf("Hexadecimal Lower: %x\n", h_low);
	ret = ft_printf("%x", h_low);
	printf("\n%d\n", ret);

	printf("Hexadecimal Upper: %X\n", h_up);
	ret = printf("%X", h_up);
	printf("\n%d\n", ret);

	printf("Percent: %%\n");
	ret = ft_printf("%%");
	printf("\n%d\n", ret);

	printf("%x\n", 99);
	ret = ft_printf("%x", 99);
	printf("\n%d\n", ret);

	return (0);
}

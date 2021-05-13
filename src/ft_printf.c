#include "../includes/ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == 'd')
		{
			int decimal = va_arg(args, int);
			printf("%d", decimal);
		}
		else if (*format == 'c')
		{
			int character = va_arg(args, int);
			printf("%c", character);
		}
	++format;
	}
	va_end(args);
	return (0);
}

#include "ft_printf.h"

void		ft_printf(char* format, ...)
{
	char* c;
	int d; 
    double f;
    va_list factor;   		    // указатель на необязательный параметр

    va_start(factor, format);   // устанавливаем указатель factor на format
	c = format;

	while(*c)
	{
		if(*c!='%')
		{
			ft_putchar(*c);
		}
		else switch (*++c)
		{
		case 'd':
			d = va_arg(factor, int);
			ft_putnbr(d);
			break;
		case 'f':
			f = va_arg(factor, double);
			printf("%.2lf", f);
			break;
		case 'l':
			d = va_arg(factor, long);
			ft_putnbr(d);
			break;
		case 's':
			ft_putchar(*c);
			break;
		default:
			ft_putchar(*c);
		}
		c++;
	} 
	va_end(factor);
}
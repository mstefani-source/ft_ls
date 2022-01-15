/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <mstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:03:41 by mstefani          #+#    #+#             */
/*   Updated: 2019/11/28 17:05:28 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf(char* format, ...)
{
	char*		c;
	int			d; 
    double		f;
	unsigned	*str;				//	указатель на строку

    va_list 	arg_ptr;   		    // указатель на необязательный параметр

    va_start(arg_ptr, format);   // устанавливаем указатель arg_ptr на format
	c = format;

	while(*c)
	{
		d = 1;
		if(*c!='%')
		{
			ft_putchar(*c);
		}
		else switch (*++c)
		{
		case 'd':
			d = va_arg(arg_ptr, int);
			ft_putnbr(d);
			break;
		case 'f':
			f = va_arg(arg_ptr, double);
			printf("%.2lf", f);
			break;
		case 'l':
			d = va_arg(arg_ptr, long);
			ft_putnbr(d);
			break;
		case 's':
			str = va_arg(arg_ptr, unsigned*);
			ft_putstr((char*)str);
			break;
		default:
			ft_putchar(*c);
		}
		c++;
	} 
	va_end(arg_ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handler.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/16 20:09:43 by fras          #+#    #+#                 */
/*   Updated: 2023/02/15 14:42:05 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_handler(va_list ap, const char *format)
{
	int	print_length;

	print_length = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				goto print;
			if (!conversions(*format))
				return (error_invalid_conversion(*format));
			print_length += print_conversion(ap, *format);
			format++;
		}
		else
		{
			print:
			print_length += helper_printer(*format);
			format++;
		}
	}
	return (print_length);
}

int	conversions(char conversion)
{
	return (conversion == 'c' || conversion == 's' || conversion == 'd' 
		|| conversion == 'i');
}

int	print_conversion(va_list ap, const char index)
{
	t_Jump_index	convert[] = {
	['c'] = &helper_putchar,
	['s'] = &helper_putstr,
	['i'] = &pfhelper_putnbr,
	['d'] = &pfhelper_putnbr,
	};

	return (convert[(unsigned int)index](ap));
}

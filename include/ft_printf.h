/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/16 14:35:07 by fras          #+#    #+#                 */
/*   Updated: 2023/02/25 18:52:16 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define _RED		"\e[1;31m"
# define _WHITE		"\e[1;37m"
# define _RESET		"\e[0m"
# define LOWERCASE	1
# define UPPERCASE	2

typedef int	(*t_Jump_index)(va_list);

int		ft_printf(const char *format, ...);
int		format_handler(va_list ap, const char *format);
int		print_conversion(va_list ap, const char index);
int		helper_printer(const char c);
int		helper_strlen(const char *str);
int		pfhelper_putchar(va_list ap);
int		pfhelper_putstr(va_list ap);
int		pfhelper_putnbr(va_list ap);
int		pfhelper_putnbr_unsigned(va_list ap);
int		pfhelper_putpointeraddress(va_list ap);
int		pfhelper_puthex_lowercase(va_list ap);
int		pfhelper_puthex_uppercase(va_list ap);
int		helper_numprint(int num, int *len);
int		helper_numprint_unsigned(unsigned int num, int *len);
int		helper_dec_to_hexconverter(size_t dec, int *len, int mode);
int		conversions(char conversion);
void	error(void);
int		error_invalid_conversion(char conversion);
int		error_incomplete_format(void);

#endif

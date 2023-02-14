/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   string.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/18 11:58:07 by fras          #+#    #+#                 */
/*   Updated: 2023/02/14 13:55:50 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	helper_putstr(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	write(1, str, helper_strlen(str));
	return (helper_strlen(str));
}

int	helper_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

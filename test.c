/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 10:22:41 by fras          #+#    #+#                 */
/*   Updated: 2022/12/23 01:09:55 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *str;
	char c;

	str = "string";
	c = 'c';
	printf("ret = %d", ft_printf("Hello\n"));
	printf("ret = %d", ft_printf("hello %s\n", str));
	printf("ret = %d", ft_printf("hello %c\n", c));
	printf("ret = %d", ft_printf("hello %M", c));
	// printf("hello %M", c);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:31:23 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/26 23:24:23 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char *str, int i, va_list args)
{
	if (str[i + 1] == '%')
		return (ft_putchar(str[i + 1]));
	if (str[i + 1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str[i + 1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i + 1] == 'u')
		return (ft_hexa(va_arg(args, unsigned int)));
	if (str[i + 1] == 'x')
		return (ft_hexa(va_arg(args, unsigned int)));
	if (str[i + 1] == 'X')
		return (ft_hexa(va_arg(args, unsigned int)));
	else if (stri + 1] == 'p')
		return (ft_putstr("0x") + ft_ptr(va_arg(args, t_llu)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int i;

	i = 0;
	while (str)
	{
		if (str[i] == '%')
		{
			
		}
	}
	i++;
		
}
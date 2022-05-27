/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:31:23 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/27 12:26:10 by maleandr         ###   ########.fr       */
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
		return (ft_putpos(va_arg(args, unsigned int)));
	if (str[i + 1] == 'x')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
	if (str[i + 1] == 'X')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (str[i + 1] == 'p')
		return (ft_putstr("0x") + ft_hexa(va_arg(args, unsigned long),
				"0123456789abcdef"));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	f;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(f, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_format(str, i, f);
			i++;
		}
		else
		{
			write (1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(f);
	return (count);
}
